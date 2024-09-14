#include <bits/stdc++.h>
using namespace std;
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
class Person{
    private:
    int myNum1, myNum2, sum; // Member variable...

    //friend void display(Class name &this function object);
    public:
    void input(){
        cout<<"Enter two number: ";
        cin>>myNum1>>myNum2;
    }
    int display(int res){
        cout<<"Sum: "<<res<<endl;
    }
    friend int calculation(Person displayObj); // Not a member function
};
int calculation(Person displayObj){
    displayObj.sum = displayObj.myNum1 + displayObj.myNum2;
    return displayObj.sum;
}
int main()
{
    Person obj;
    obj.input();

    int output = calculation(obj);

    obj.display(output);

    return 0;
}
