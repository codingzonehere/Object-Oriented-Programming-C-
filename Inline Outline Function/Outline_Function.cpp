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

/********
Inline function:
    In class
Outline function:
    Out of class.
*********/
class Person{
    public:
    int num1, num2;
    //void input(); function declaration
    void input();
    void calculate();
};
/*****
function type class name :: function name(){}
******/
void Person::input(){
    cout<<"Enter two number: ";
    cin>>num1>>num2;
}
void Person::calculate(){
    cout<<"Sum: "<<num1+num2<<endl;
}
int main() {
    Person obj;
    obj.input();
    obj.calculate();
    
    return 0;
}
