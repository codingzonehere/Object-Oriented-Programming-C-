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
    A destructor:
        A destructor a special member function of a class that is automatically called when an object of the class is destroyed. It is used to release any resources that the object may have acquired during its lifetime (such as dynamically allocated memory or file handles).

    Key Points:
        A destructor has the same name as the class but with a ~ symbol before it.

        It does not take any parameters and does not return any value.

        Destructors are automatically called when an object goes out of scope or is explicitly deleted.

        If a class allocates memory or resources dynamically (using new), the destructor is responsible for deallocating them (using delete).
        
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
            cout << "Car created: " << make << ", Year: " << year << endl;
        }

        // Destructor
        ~Car() {
            cout << "Car destroyed: " << make << ", Year: " << year << endl;
        }

        void display() {
            cout << "Make: " << make << ", Year: " << year << endl;
        }
};

int main() {
    // Creating an object of the Car class
    Car car1("Toyota", 2020);
    car1.display();  // Output: Make: Toyota, Year: 2020

    // Destructor will be called automatically when the object goes out of scope

    return 0;
}
