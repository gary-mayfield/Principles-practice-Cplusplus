
//
// This is an example from Chapter 9.7.1" of
// "Programming -- Principles and Practice Using C++" by Bjarne Stroustrup
// - Gary Mayfield

#include "std_lib_facilities.h"

//------------------------------------------------------------------------------

enum class Month{
    Jan=1, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec
};

class Year{                     // year in [min:max] range
    static const int min = 1800;
    static const int max = 2200;
public:
    class Invalid{};
    Year(int x) : y{x} {if (x<min || max <=x) throw Invalid{}; }
    int year() {return y;}
private:
    int y;
};

class Date{
public:
    Date(Year y, Month m, int d);       // check for valid date and initialize
    // ...
private:
    Year y;
    Month m;
    int d;      // day
};

int main()
{
    Date dx1{Year{1998}, 4, 3};             // error: 2nd argument not a Month
    Date dx1{Year{1998}, 4, Month::Mar};    // error: 2nd argument not a Month
    Date dx1{4, Month::Mar, Year{1998}};    // error: 1st argument not a Year
    Date dx1{Month::Mar, 4, Year{1998}};    // error: 2nd argument not a Month
    Date dx1{Year{1998}, Month::Mar, 30};   // OK

    keep_window_open();
    return 0;
}

//------------------------------------------------------------------------------
