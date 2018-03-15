
//
// This is an example from Chapter 6.5.2.2" of
// "Programming -- Principles and Practice Using C++" by Bjarne Stroustrup
// - Gary Mayfield

#include "std_lib_facilities.h"

//------------------------------------------------------------------------------

double expression()
{
    double left = term();                       // read and evaluate a Term
    Token t = get_token();                      // get the next token
    switch(t.kind){                             // see which kind of token it is
        case '+':
            return left + expression();         // read and evaluate an Expression,
                                                // then do an add
        case '-':
            return left - expression();         // read and evaluate an Expression,
                                                // then do a subtraction
        default:
            return left;                        // return the value of the Term
    }
}

int main()
{
    keep_window_open();
    return 0;
}

//------------------------------------------------------------------------------
