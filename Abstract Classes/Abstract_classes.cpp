/****************************************************************************************************
***************************************AUTHOR: TANVIR AHMED******************************************
*********************************************CSE, DUET***********************************************
****************************************************************************************************/
#include <bits/stdc++.h>
#include <algorithm>
#include <cstring>
#include <string>
#include <vector>
#define testcase int t; cin>>t; while(t--)
#define iosbse ios_base::sync_with_stdio(false)
#define cintie cin.tie(NULL)
#define ll long long int
#define forloop for (int i = 0; i < n; ++i)
#define vecti vector<int>
#define vect vector<ll>
#define sr string
#define YS cout << "YES" <<endl
#define NO cout << "NO" <<endl
#define pb(x) push_back(x)
#define sz(x) trunc(log10(x)) + 1
#define setpre(x) cout<<fixed<<setprecision(x)<<endl;

using namespace std;

/*******************
void sendMessage(){ no abstraction
    cout<<"This is a message...!";
}
virtual void sendMessage(){ no abstraction
    cout<<"This is a message...!";
}
virtual void sendMessage(){ // no abstraction
    cout<<"This is a message...!";
}
virtual void sendMessage() = 0; Pure Virtual Function....
Jodi kno Class er modhe pure virtual function decleare kora hoy take Abstraction bole.
Propertise:
01. Can't create object.
02. We can create a pointer and referance base abstract class 

********************/
class mobileUser{                   //mobileUser is a abstract class
    public:
    void call(){
        cout<<"Now ready to call...."<<endl;
    }
    virtual void sendMessage() = 0; //one virtiual function here....
};
class Rahim :  public mobileUser{
    public:
    void sendMessage(){
        cout<<"Now, Rahim ready to send message..."<<endl;
    }
};
class Karim :  public mobileUser{
    public:
    void sendMessage(){
        cout<<"Now, Karim ready to send message..."<<endl;
    }
};
int main()
{
    //mobileUser m;     // not valid.  Can't create object.
    mobileUser *m;      // valid pointer....

    Rahim r;
    Karim k;

    m = &r;
    m->call();
    m->sendMessage();

    m = &k;
    m->call();
    m->sendMessage();

    return 0;
}
