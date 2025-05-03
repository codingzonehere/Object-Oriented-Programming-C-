// try {         
//      // Code that might throw an exception
//      throw SomeExceptionType("Error message");
//  } 
// catch( ExceptionName e1 )  {   
//      // catch block catches the exception that is thrown from try block
// } 
/****************************************************************************************************
***************************************AUTHOR: TANVIR AHMED******************************************
*********************************************CSE, DUET***********************************************
****************************************************************************************************/
#include <bits/stdc++.h>
#include <algorithm>
#include <cstring>
#include <string>
#include <vector>
#define testcase int t; cin>>t; while(t--)
#define iosbse ios_base::sync_with_stdio(false)
#define cintie cin.tie(NULL)
#define ll long long int
#define forloop for (int i = 0; i < n; ++i)
#define vecti vector<int>
#define vect vector<ll>
#define sr string
#define YS cout << "YES" <<endl
#define NO cout << "NO" <<endl
#define pb(x) push_back(x)
#define sz(x) trunc(log10(x)) + 1
#define setpre(x) cout<<fixed<<setprecision(x)<<endl;

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
