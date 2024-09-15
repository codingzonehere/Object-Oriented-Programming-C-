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
    int m,n;
    public:
        // ">>" insertion or right shift operator overloading
        friend istream &operator>>(istream& in, Student& x)
        {
            cout<<"Enter data for m & n : ";
            in>>x.m>>x.n;

            cout<<endl;
            return in;
        }
        //"<<" ex-sertion or left shift operator overloading
        friend ostream &operator<<(ostream& out, Student& y)
        {
            cout<<"\nYour result is : ";
            out<<y.m<<" "<<y.n;

            return out;
        }
        Student operator+(Student r)
        {
            Student temp;

            temp.m=m+r.m;
            temp.n=n+r.n;

            return temp;
        }
        void display()
        {
            cout<<"You have entered "<<m<<" and "<<n<<endl;
        }
};

int main()
{
    Student a,b,c;
    cin>>a;
    cin>>b;

    //    cout <<a<<endl;
    //    cout<<b<<endl;
    a.display();
    b.display();

    c=a+b;
    cout<<c<<endl;

    return 0;
}
