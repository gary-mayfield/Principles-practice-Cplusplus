
//
// This is an example from Chapter 6.5.2.1" of
// "Programming -- Principles and Practice Using C++" by Bjarne Stroustrup
// - Gary Mayfield

#include "std_lib_facilities.h"

//------------------------------------------------------------------------------

double expression()
{
    double left = expression();                 // read and evaluate an Expression  // infinite recursion BAD
    Token t = get_token();                      // get the next token
    switch(t.kind){                             // see which kind of token it is
        case '+':
            return left + term();               // read and evaluate a Term,
                                                // then do an add
        case '-':
            return left - term();               // read and evaluate a Term,
                                                // then do a subtraction
        default:
            return left;                        // return the value of the Expression
    }
}

int main()
{
    keep_window_open();
    return 0;
}

//------------------------------------------------------------------------------
