#include <bits/stdc++.h>
using namespace std;
//Compile time polymorphism.....!
class Student{
    public:
    void sum(int a, int b){
        cout<<a<<" "<<b<<" = "<<a+b<<endl;
    }
    void sum(int a, int b, int c){
        cout<<a<<" "<<b<<" "<<c<<" = "<<a+b+c<<endl;
    }
    void sum(double a, double b){
        cout<<a<<" "<<b<<" = "<<a+b<<endl;
    }
};
int main()
{
    Student obj1;
    obj1.sum(10,20);
    obj1.sum(10,20,30);
    obj1.sum(10.5,20.7);
    return 0;
}
