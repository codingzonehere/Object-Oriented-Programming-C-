#include<bits/stdc++.h>
using namespace std;
/********
Inline function:
    In class
Outline function:
    Out of class.
*********/
class Person{
    public:
    int num1, num2;
    //void input(); function declaration
    void input(){   //function defination.
        cout<<"Enter two number: ";
        cin>>num1>>num2;
    }
    void calculate(){
        cout<<"Sum: "<<num1+num2<<endl;
    }
};
int main() {
    Person obj;
    obj.input();
    obj.calculate();
    
    return 0;
}