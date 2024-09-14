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
