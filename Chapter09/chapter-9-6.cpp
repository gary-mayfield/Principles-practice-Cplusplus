
//
// This is an example from Chapter 9.6" of
// "Programming -- Principles and Practice Using C++" by Bjarne Stroustrup
// - Gary Mayfield

#include "std_lib_facilities.h"

//------------------------------------------------------------------------------

enum class Month{
    Jan=1, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec
};

Month operator++(Month& m)                          // prefix increment operator
{
    m = (m==Month::Dec) ? Month::Jan : Month(int(m)+1)

    return m;
}

int main()
{
    Month m::Sep;
    ++m;                    // m becomes Oct
    ++m;                    // m becomes Nov
    ++m;                    // m becomes Dec
    ++m;                    // m becomes Jan ("wrap around")

    keep_window_open();
    return 0;
}

//------------------------------------------------------------------------------
