
//
// This is an example from Chapter 6.7" of
// "Programming -- Principles and Practice Using C++" by Bjarne Stroustrup
// - Gary Mayfield

#include "std_lib_facilities.h"

//------------------------------------------------------------------------------

double expression()
{
    double left = term();                       // read and evaluate a Term
    Token t = ts.get();                         // get the next Token from the Token Stream
    while(true){
        switch(t.kind){
            case '+':
                left += term();                 // evaluate Term and add
                t = get_token();
                break;
            case '-':
                left -= term();                 // evaluate Term and subtract
                t = get_token();
                break;
            default:
                ts.putback(t);                  // put t back into the Token stream
                return left;    // finally: no more + or -; return the answer
        }
    }
}

double term()
{
    double left = primary();
    Token t = ts.get();                         // get the next Token from the Token Stream
    while(true){
        switch(t.kind){
            case '*':
                left *= primary();
                t = get_token();
                break;
            case '/':
            {   double d = primary();
                if (d == 0)error("divide by zero");
                left /= d;
                t = get_token();
                break;
            }
            default:
                ts.putback();                   // put t back into the Token Stream
                return left;
        }
    }
}

double primary()
{
    Token t = ts.get();
    switch(t.kind){
        case '(':                               // handle '(' expression ')'
            {
                double d = expression();
                t = get_token();
                if(t.kind ! = ')')error("')' expected");
                return d;
            }
        case '8':                               // we use '8' to represent a number
            return t.value;                     // return the number's value
        default:
            error("primary expected");
    }
}

int main()
{
    try{
        double val = 0;
        while(cin){
            Token t = ts.get();

            if(t.kind == 'q') break;            // 'q' for "quit"
            if(t.kind == ';')                   // ';' for "print now"
                cout << "=" << val << '\n';
            else
                ts.putback(t);
            val = expression();
        }
    }
    catch(exception& e){
        cerr << e.what() << '\n';
        keep_window_open();
        return 1;
    }
    catch(...){
        cerr << "exception \n";
        keep_window_open();
        return 2;
    }
    keep_window_open();
    return 0;
}

//------------------------------------------------------------------------------
