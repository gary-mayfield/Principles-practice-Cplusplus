
//
// This is an example from Chapter 9.4.1" of
// "Programming -- Principles and Practice Using C++" by Bjarne Stroustrup
// - Gary Mayfield

#include "std_lib_facilities.h"

//------------------------------------------------------------------------------

// simple Date (too simple?)
struct Date{
    int y;      // year
    int m;      // month in year
    int d;      // day of month
};

int main()
{
    Date today; // a Date variable (a named object)
    // set today to December 24, 2005
    today.y = 2005;
    today.m = 12;
    today.d = 24;
    keep_window_open();
    return 0;
}

//------------------------------------------------------------------------------
