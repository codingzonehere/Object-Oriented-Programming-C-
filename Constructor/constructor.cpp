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
Theory:
    Constructor:
    A constructor in C++ is a special member function that is automatically called when an object is created. It has the same name as the class and no return type. 
********/

class Car {

    public:
        string model;
        
        // Constructor
        Car(string modelName) {
            model = modelName;
            cout << "A new car is created!" << endl;
        }
        
        void display() {
            cout << "Model: " << model << endl;
        }
};

int main() {
    
    // Creating an object calls the constructor automatically.
    Car myCar("Toyota");
    myCar.display();
    
    return 0;
}