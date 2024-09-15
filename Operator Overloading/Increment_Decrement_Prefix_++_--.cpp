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
    //++prefix operator overloading
    Student operator++()
    {
        x+=1;
        return *this;
    }
    //--prefix operator overloading
    Student operator--()
    {
        x-=1;
        return *this;
    }
    void display()
    {
        cout<<x<<endl;
    }
};
int main()
{
    int n;
    cout<<"Enter any number: ";
    cin>>n;
    Student a(n);
    a.display();

    ++a;
    a.display();
    
    --a;
    a.display();

    return 0;
}
