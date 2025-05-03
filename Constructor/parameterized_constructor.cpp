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
    Parameterized Constructor:
        A parameterized constructor in C++ is a constructor that takes arguments to initialize an object with specific values when it is created.

    Key Points:
        A parameterized constructor allows you to initialize an object with custom values by passing arguments to it.

        This constructor takes one or more parameters.
    
********/

class Car {
    private:
        string make;
        int year;

    public:
        // Parameterized Constructor
        Car(string m, int y) {
            make = m;
            year = y;
        }

        void display() {
            cout << "Make: " << make << ", Year: " << year << endl;
        }
};

int main() {
    // Using the parameterized constructor
    Car myCar("Toyota", 2020);
    myCar.display();  // Output: Make: Toyota, Year: 2020

    return 0;
}
