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
    public:
    void display(int i){
        cout<<i<<" Display ......show..."<<endl;
    }
};
int main() {
    // Array of object...
    Person obj[10];     //Three object here...!
    //obj[2].display();
    for (int i = 1; i <=10; i++)
    {
        obj[i].display(i);
    }
    
    return 0;
}
