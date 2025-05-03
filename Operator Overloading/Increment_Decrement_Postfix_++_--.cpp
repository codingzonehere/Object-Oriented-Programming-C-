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
    int x;
    public:
        Student(int m=0) : x(m){}
        //postfix++ operator overloading
        Student operator++(int n)
        {
            Student duplicate (*this);
            x+=1;
            return duplicate;
        }
        //postfix-- operator overloading
        Student operator--(int n)
        {
            Student duplicate (*this);
            x-=1;
            return duplicate;
        }
        void display()
        {
            cout<<x<<endl;
        }
};

int main()
{
    Student a(5);
    a.display();

    //a++;
    a++.display();

    //a--;
    a--.display();

    a.display();

    return 0;
}

