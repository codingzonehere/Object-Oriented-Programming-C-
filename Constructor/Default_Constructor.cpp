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
    Default Constructor:
        A default constructor is a constructor that can be called with no arguments. It initializes an object with default values when no specific initialization is provided.
    
    Characteristics:
        1. Takes no parameters
        2. Automatically provided by compiler if no constructors are defined
        3. Initializes members to default values (0 for numbers, empty strings, etc.)   
********/

class Car {
    
    private:
        string make;
        int year;

    public:
        // Default Constructor
        Car() {
            make = "Unknown";
            year = 0;
        }

        void display() {
            cout << "Make: " << make << ", Year: " << year << endl;
        }
};

int main() {
    // Using the default constructor
    Car myCar;
    myCar.display();  // Output: Make: Unknown, Year: 0

    return 0;
}
