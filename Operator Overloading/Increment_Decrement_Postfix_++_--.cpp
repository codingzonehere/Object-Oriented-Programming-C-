#include <bits/stdc++.h>
using namespace std;
/************
 * Prefix:
  01. class name operator keyword ++/--(){
        x+=1;
        return *this;
  }
*************/
class Student
{
    int x;
    public:
        Student(int m=0) : x(m){}
        //postfix++ operator overloading
        Student operator++(int n)
        {
            Student duplicate (*this);
            x+=1;
            return duplicate;
        }
        //postfix-- operator overloading
        Student operator--(int n)
        {
            Student duplicate (*this);
            x-=1;
            return duplicate;
        }
        void display()
        {
            cout<<x<<endl;
        }
};

int main()
{
    Student a(5);
    a.display();

    //a++;
    a++.display();

    //a--;
    a--.display();

    a.display();

    return 0;
}

