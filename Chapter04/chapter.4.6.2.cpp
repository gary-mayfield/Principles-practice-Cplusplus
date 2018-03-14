
//
// This is an example from Chapter 4.6.2 "A numeric example" of
// "Programming -- Principles and Practice Using C++" by Bjarne Stroustrup
// - Gary Mayfield

#include "std_lib_facilities.h"

//------------------------------------------------------------------------------

// read some temperatures into a vector
int main()
{
    vector<double> temps;         // temperatures
    double temp;
    while (cin>>temp)             // read 
        temps.push_back(temp);    // put into vector
    // ... do something ...
}

//------------------------------------------------------------------------------
