
//
// This is an example from Chapter 9.4.3" of
// "Programming -- Principles and Practice Using C++" by Bjarne Stroustrup
// - Gary Mayfield

#include "std_lib_facilities.h"

//------------------------------------------------------------------------------

// simple Date (control access)
class Date{
    int y, m, d;                        // year, month, day
public:
    Date(int y, int m, int d);          // check for valid date and initialize
    void add_day(int n);                // increase the Date by n days
    int month() {return m;}
    int day() {return d;}
    int year() {return y;}
};

int main()
{
    Date birthday {1970, 12, 30}        // OK
    birthday.m = 14;                    // error: Data::m is private
    cout << birthday.month() << '\n';   // we provided a way to read m
    keep_window_open();
    return 0;
}

//------------------------------------------------------------------------------
