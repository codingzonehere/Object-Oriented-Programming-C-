// try {         
//      // Code that might throw an exception
//      throw SomeExceptionType("Error message");
//  } 
// catch( ExceptionName e1 )  {   
//      // catch block catches the exception that is thrown from try block
// } 
#include <bits/stdc++.h>
using namespace std;
double division(double a,double b)
{
    if(b == 0) throw 0.0;
    return a/b;
}
int main()
{
    double a,b;
    cout << "Enter two number : " ;
    cin>>a>>b;
    try
    {
        cout << "Result is : " << division(a,b) << endl;
    }
    catch(double)
    {
        cout << "Exception caught!" << endl;
    }
    return 0;
}
