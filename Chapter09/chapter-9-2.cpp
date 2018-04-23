
//
// This is an example from Chapter 9.2" of
// "Programming -- Principles and Practice Using C++" by Bjarne Stroustrup
// - Gary Mayfield

#include "std_lib_facilities.h"

//------------------------------------------------------------------------------

class X{
    public:
        int m;                  // data member
        
        int mf(int v){          // function member
            int old = m;
            m = v;
            return old;
        }
}

int main()
{
    X var;                      // var is a variable of type X
    var.m = 7;                  // assign to var's data member m
    int x = var.mf(9);          // call var's member function mf()
    keep_window_open();
    return 0;
}

//------------------------------------------------------------------------------
