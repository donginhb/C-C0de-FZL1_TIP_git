namespace OPCTrendLib
{
    using System;

    internal enum Token
    {
        None,
        EndOfFile,
        BinaryFirst,
        BooleanFirst,
        BooleanOr,
        BooleanAnd,
        Inequality,
        Equality,
        LessThan,
        LessThanOrEqual,
        GreaterThan,
        GreaterThanOrEqual,
        BooleanLast,
        BitwiseFirst,
        BitwiseOr,
        BitwiseAnd,
        BitwiseXor,
        BitwiseShiftLeft,
        BitwiseShiftRight,
        BitwiseLast,
        ArithmeticFirst,
        Add,
        Subtract,
        Multiply,
        Divide,
        Modulus,
        BinaryLast,
        BooleanNot,
        BitwiseNot,
        LeftIndexer,
        RightIndexer,
        ConditionalIf,
        ConditionalSemicolon,
        Member,
        LeftParen,
        RightParen,
        HexStart,
        CharMarker,
        StringMarker,
        DateMarker,
        Comma,
        Identifier,
        ConstFirst,
        True,
        False,
        Null,
        Const,
        ConstLast,
        TokenMax
    }
}
