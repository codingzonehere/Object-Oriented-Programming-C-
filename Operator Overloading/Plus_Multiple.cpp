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

/************
 * Prefix:
  01. class name operator keyword ++/--(){
        x+=1;
        return *this;
  }
*************/
class Student
{
    int x,y;
    public:
        Student (int a=0,int b=0) : x(a), y(b){}

        Student operator+(Student add)
        {
            Student tmep;
            tmep.x=x+add.x;
            tmep.y=y+add.y;

            return tmep;
        }
        Student operator*(Student mul)
        {
            Student temp;
            temp.x=x*mul.x;
            temp.y=y*mul.y;

            return temp;
        }
        void display()
        {
            cout << "Your result is : "<<x<<" "<<y<<endl;
        }
};
int main()
{
    Student a(1,2),b(3,4),c;
    c=a+b;
    c.display();

    Student mul=a*b;
    mul.display();

    return 0;
}
