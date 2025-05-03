/******
01. Only Friend function access private and protected data.
02. A friend function is not a member function.
03. We can declare it both in a private and public mode.
04. It can declare  inside the class but must be define from outside the class.
05. Always define outside from the class without scope resulation operator.
06. It has own object.
07. From outside the class, it will call the private and protected member function.
08. It is declare with the friend keyword.
*******/
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

class Person{
    private:
    string myName = "Tanvir"; // Member variable...

    //friend void display(Class name &this function object);
    friend void display(Person &displayObj); // Not a member function
};
void display(Person &displayObj){
    displayObj.myName;
    cout<<"My name: "<<displayObj.myName;
}
int main()
{
    Person obj;
    display(obj);

    return 0;
}
