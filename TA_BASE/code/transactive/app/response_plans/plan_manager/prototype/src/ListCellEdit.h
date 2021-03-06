/**
  * The source code in this file is the property of
  * Ripple Systems and is not for redistribution
  * in any form.
  *
  * Source:   $File: //depot/GZL6_TIP/TA_BASE/transactive/app/response_plans/plan_manager/prototype/src/ListCellEdit.h $
  * @author:  Ripple
  * @version: $Revision: #1 $
  *
  * Last modification: $DateTime: 2012/06/12 13:35:44 $
  * Last modified by:  $Author: builder $
  *
  */
#if !defined(AFX_LISTCELLEDIT_H__D7A66436_C142_11D5_B649_0050BAB1D92B__INCLUDED_)
#define AFX_LISTCELLEDIT_H__D7A66436_C142_11D5_B649_0050BAB1D92B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

// ListCellEdit.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CListCellEdit window

class CListCellEdit : public CEdit
{
// Construction
public:
    CListCellEdit(CWnd *parent, CRect cellRect, int item, int subItem, CString text);

// Attributes
public:

protected:
    bool    m_esc;
    bool    m_numeric;
    CString m_acceptableNumChars;
    int     m_item;
    int     m_subItem;

// Operations
public:
    void Update();
    void SetNumeric(bool numeric = true);


// Overrides
    // ClassWizard generated virtual function overrides
    // {{AFX_VIRTUAL(CListCellEdit)
    public:
    virtual BOOL PreTranslateMessage(MSG* pMsg);
    // }}AFX_VIRTUAL

// Implementation
public:
    virtual ~CListCellEdit();

    // Generated message map functions
protected:
    // {{AFX_MSG(CListCellEdit)
    afx_msg void OnChange();
    afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
    afx_msg void OnKillFocus(CWnd* pNewWnd);
    // }}AFX_MSG

    DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_LISTCELLEDIT_H__D7A66436_C142_11D5_B649_0050BAB1D92B__INCLUDED_)
