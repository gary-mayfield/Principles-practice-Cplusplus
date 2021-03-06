
//
// This is an example from Chapter 10.7" of
// "Programming -- Principles and Practice Using C++" by Bjarne Stroustrup
// - Gary Mayfield

#include "std_lib_facilities.h"

//------------------------------------------------------------------------------

int main()
{
    cout << "Please enter an integer in the range 1 to 10 (inclusive):\n";
    int n = 0;
    while(cin>>n){                      // read
        if (1<=n && n<=10)break;        // check range
        cout << "Sorry "
            << n << " is not in the [1:10] range; please try again\n";
    }
    // ... use n here ...
}

//------------------------------------------------------------------------------
