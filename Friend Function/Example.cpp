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
    int price[5], sum=0; // Member variable...

    public:
    void input(){
        for (int i = 1; i <= 5; i++)
        {
            cin>>price[i];
        }
    }
    //friend void display(Class name &this function object);
    friend int calculationTotal(Person totalObj); // Not a member function
};
int calculationTotal(Person totalObj){
    for (int i = 1; i <= 5; i++)
    {
        totalObj.sum += totalObj.price[i];
    }
    cout<<"Total price: "<<totalObj.sum<<endl;
}
int main()
{
    Person obj;
    obj.input();

    calculationTotal(obj);

    return 0;
}
