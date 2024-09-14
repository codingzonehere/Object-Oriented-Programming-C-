// try {         
//      // Code that might throw an exception
//      throw SomeExceptionType("Error message");
//  } 
// catch( ExceptionName e1 )  {   
//      // catch block catches the exception that is thrown from try block
// } 
#include <bits/stdc++.h>
using namespace std;
double my_sqrt(int n)
{
    if(n<0) throw 0;
    return sqrt(n);
}
int main()
{
    int n;
    cout << "Enter a number : " ;
    cin >> n;
    
    try
    {
        cout << "Square root is : " << my_sqrt(n) << endl;
    }
    catch(int)
    {
        cout << "Exception caught!" << endl;
    }
    return 0;
}
