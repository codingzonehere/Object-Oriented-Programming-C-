#include <bits/stdc++.h>
using namespace std;
//Compile time polymorphism.....!
class Student{
    public:
    void Display(){
        cout<<"Welcome to..student.... "<<endl;
    }
};
class Teacher: public Student{
    public:
    void Display(){
        cout<<"Welcome to...teacher... "<<endl;
    }
};
class Person: public Student{
    public:
    void Display(){
        cout<<"Welcome to...person... "<<endl;
    }
};
int main()
{
    cout<<endl;
    Student *s;
    Teacher t;
    Person p;

    s = &t;
    s->Display();

    return 0;
}
