#include<bits/stdc++.h>
using namespace std;
class Person{
    public:
    void display(int i){
        cout<<i<<" Display ......show..."<<endl;
    }
};
int main() {
    // Array of object...
    Person obj[10];     //Three object here...!
    //obj[2].display();
    for (int i = 1; i <=10; i++)
    {
        obj[i].display(i);
    }
    
    return 0;
}