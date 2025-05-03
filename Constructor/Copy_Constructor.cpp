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
    A copy constructor: 
        A copy constructor in C++ is a special constructor used to create a new object as a copy of an existing object. It initializes the new object using the values of an existing object.

    Key Points:
        The copy constructor is called when a new object is initialized from an existing object of the same class.

        It takes a reference to an object of the same class as a parameter.

        The copy constructor is useful for copying objects, especially when passing or returning objects by value.
    
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

        // Copy Constructor
        Car(const Car& other) {
            make = other.make;
            year = other.year;
        }

        void display() {
            cout << "Make: " << make << ", Year: " << year << endl;
        }
};

int main() {
    // Using parameterized constructor
    Car car1("Honda", 2022);
    car1.display();  // Output: Make: Honda, Year: 2022

    // Using copy constructor
    Car car2 = car1;  // car2 is a copy of car1
    car2.display();  // Output: Make: Honda, Year: 2022

    return 0;
}
