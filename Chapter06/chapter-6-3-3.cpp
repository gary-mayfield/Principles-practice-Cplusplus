
//
// This is an example from Chapter 6.3.3" of
// "Programming -- Principles and Practice Using C++" by Bjarne Stroustrup
// - Gary Mayfield

#include "std_lib_facilities.h"

//------------------------------------------------------------------------------

class Token{            // a very simple user-defined type
public:
    char kind;
    double value;
};

int main()
{
    Token t;            // t is a Token
    t.kind = '+';       // t represents a +
    Token t2;           // t2 is another Token
    t2.kind = '8';      // we use the digit 8 as the 'kind' for numbers
    t2.value = 3.14;
    Token tt = t;       // copy initialization
    if(tt.kind != t.kind) error("impossible!");
    t = t2;             // assignment
    cout << t.value;    // will print 3.14
    keep_window_open();
    return 0;
}

//------------------------------------------------------------------------------
