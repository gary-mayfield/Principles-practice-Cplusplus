
//
// This is an example from Chapter 9.5" of
// "Programming -- Principles and Practice Using C++" by Bjarne Stroustrup
// - Gary Mayfield

#include "std_lib_facilities.h"

//------------------------------------------------------------------------------

enum class Month{
    jan=1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
};

Month int_to_month(int x)
{
    if (x<int(Month::jan)||int(Month::dec)<x) error("bad month");
    return Month(x);
}

int main()
{
    Month m = Month::feb;

    Month m2 = feb;                     // error: feb is not in scope
    m = 7;                              // error: can't assign an int to a Month
    int n = m;                          // error: can't assign a Month to an int
    Month mm = Month(7);                // convert int to Month (unchecked)
    keep_window_open();
    return 0;
}

//------------------------------------------------------------------------------
