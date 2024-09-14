// try {         
//      // Code that might throw an exception
//      throw SomeExceptionType("Error message");
//  } 
// catch( ExceptionName e1 )  {   
//      // catch block catches the exception that is thrown from try block
// } 
#include <bits/stdc++.h>
using namespace std;
int factorial(int num)
{
    if(num<0) throw 0;

    else if(num == 1) return 1;
    return num*factorial(num-1);
}
int main()
{
    int n;
    cout << "Enter a integer : " ;
    cin>> n;

    try
    {
        cout << "Factorial is : " << factorial(n) << endl;
    }
    catch(int)
    {
        cout << "Exception caught!" << endl;
    }
    return 0;
}
