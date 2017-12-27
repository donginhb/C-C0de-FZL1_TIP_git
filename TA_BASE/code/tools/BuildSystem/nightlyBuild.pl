#!/usr/local/bin/perl -w

# The source code in this file is the property of
# Ripple Systems and is not for redistribution
# in any form.
#
# Source:  $File: $ 
# Author:  Andrew Del Carlo
# Version: $Revision: $
#
# Last modification: $DateTime: $
# Last modified by:  $Author: $
#
# This script is for automatically building CODE_4669 nightly

#############################################################################
# nightlyBuild.pl                                                           #
#                                                                           #
# This script is for automatically building CODE_4669 nightly               #
#                                                                           #
# USAGE: perl nightlyBuild.pl      (it is best to use scheduling to run     #
#                                     after midnight)                       #
#                                                                           #
# Author: Andrew Del Carlo                                                  #
# Date: 6th May 2003                                                        #
#                                                                           #
# Last Modified by:                                                         #
# Date:                                                                     #
#############################################################################

use strict;
use Getopt::Std;
use MIME::Lite;

# Global variables to be used in most functions.
my $emailTo = "ameerp\@ripple-systems.com, andrewdc\@ripple-systems.com, adamr\@ripple-systems.com";
my $version = "";
my $buildFile = "";
my $environment = $^O;
my $DEBUG = "";

#############################################################################
#                                                                           #
#                             Main Program                                  #
#                                                                           #
#############################################################################

open( LOGFILE, ">Log/nightlybuild.log" ) or die "Can't open logfile\n";


# Checkout the branch specified by <version>.
    CheckoutFiles();

# Create the Solaris build configuration file
if ($environment eq "MSWin32")
{
    system("perl createWindowsBuildFile.pl code");

    #set the build file to what is autogenerated by createWindowsConfig.pl
    $buildFile = "BuildFiles/windowsNightly.txt";
}
else
{
    system("perl createSolarisBuildFile.pl");

    #set the build file to what is autogenerated by createSolarisConfig.pl
    $buildFile = "BuildFiles/solarisNightly.txt";
}


# Build the branch specified by <version> and <buildFile>.
    BuildITS();
    my $summaryMessage = SummariseErrors();
    MailBuilders($summaryMessage);


#############################################################################
#                                                                           #
#                             Subroutines                                   #
#                                                                           #
#############################################################################

#############################################################################
# CheckoutFiles                                                             #
#                                                                           #
# Checkout the <version> files from CVS required for the build.             # 
#                                                                           #
# ARGS:    None                                                             #
# RETURNS: None                                                             #
#############################################################################

sub CheckoutFiles
{
    #get todays date;
    my($day, $month, $year)=(gmtime)[3,4,5];
    $month=$month+1;
    if($month<10)
    {
	    $month="0$month";
    }
    if($day<10)
    {
	    $day="0$day";
    }
    $year=$year+1900;
    print "$day\-".$month."-".$year."\n";

    Log("=== Checking out CODE_4669...\n\n");
    if ( (-e "code/CVS/Repository") && (-e "code/CVS/Entries") && (-e "code/CVS/Root") )
    {
		#system("cvs -q update -d -A -C -f -r CODE_4669 -D \"$year-$month-$day 16:00:01 GMT\" code");
		system("cvs -q update -A -d -C -f -r CODE_4669 code");
    }
    else
    {
		#system("cvs -q checkout -f -r CODE_4669 -D \"$year-$month-$day 16:00:01 GMT\" code");
		system("cvs -q checkout -f -r CODE_4669 code");
    }
}

#############################################################################
# BuildITS                                                                  #
#                                                                           #
# Run the Build.pl script.                                                  #
#                                                                           #
# ARGS:    None                                                             #
# RETURNS: None                                                             #
#############################################################################

sub BuildITS
{
    Log("=== Building system...\n\n");

    # Run the Build script.

    print "Running the Build.pl script with build file: $buildFile\n" if ($DEBUG);
    system("perl Build.pl $buildFile --action=debug");


}


#############################################################################
# SummariseErrors                                                           #
#                                                                           #
# Parse the xx_Buildsummary.txt file and list all the projects              #
# that did not build.                                                       #
#                                                                           #
# ARGS:    None                                                             #
# RETURNS: A message about the files that failed.                           #
#############################################################################

sub SummariseErrors
{
    open(SUMMARY_FILE,"Log/xx_Buildsummary.txt") or
        die "Could not open Log/xx_Buildsummary.txt";

    my $summaryMessage = "";
    my $num = 1;

    while(<SUMMARY_FILE>)
    {
        if( /.*\'(.*)\'.*failed.*/ )
        {
            $summaryMessage .= "$num\. $1\n";    
        $num++;
        }
    }
    
    if( $summaryMessage ne "" )
    {
        $summaryMessage = "The following projects failed to build. " .
                          "See xx_Buildfile.txt.\n\n" . 
                          $summaryMessage;
        Log("### $summaryMessage");
    }
    else
    {
        $summaryMessage = "There were no build failures.";
        Log("=== $summaryMessage");
    }    
    
    return $summaryMessage;
}


#############################################################################
# MailBuilders                                                              #
#                                                                           #
# Mail the builders the results of the build.                               #
#                                                                           #
# ARGS:    The summary message                                              #
# RETURNS: None                                                             #
#############################################################################

sub MailBuilders
{
    my $message = shift(@_);    

    # Set the send type to smtp, rather than sendmail.
    # Set the mail server to exchange
    MIME::Lite->send('smtp', "envelope", Timeout=>60);

    # new message
    my $msg = MIME::Lite->new(
                 To      =>$emailTo,
                 Subject =>"$environment $version build for $buildFile",
                 Type    =>'TEXT',
		 Data    =>$message
                 );
    # attach the buildoutput text file
    $msg->attach(Type     =>'text/plain',   
                 Path     =>"Log/xx_Buildoutput.txt"
		 );
		 
    # finally send it
    $msg->send; 
}

#############################################################################
# Log                                                                       #
#                                                                           #
# Log to the file "autobuild.log" and to the command line if -v is specifed.#
#                                                                           #
# ARGS:    The message to log.                                              #
# RETURNS: None                                                             #
#############################################################################

sub Log 
{
    my $log = shift(@_);
    print LOGFILE $log;
    print $log;
}
