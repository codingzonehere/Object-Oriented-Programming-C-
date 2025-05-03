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

//Compile time polymorphism.....!
class Student{
    public:
    void Display(){
        cout<<"Welcome to..student.... "<<endl;
    }
};
class Teacher: public Student{
    public:
    void Display(){
        cout<<"Welcome to...teacher... "<<endl;
    }
};
class Person: public Student{
    public:
    void Display(){
        cout<<"Welcome to...person... "<<endl;
    }
};
int main()
{
    cout<<endl;
    Student *s;
    Teacher t;
    Person p;

    s = &t;
    s->Display();

    return 0;
}
