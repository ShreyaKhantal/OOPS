#include <iostream>
using namespace std;

class A{
    int a1 = 1;
protected:
    int a2 = 2;
public:
    A(){
        cout << "Class A is called"<<endl;
    }
    int a3=3;
};
class B: public A{
    int b1=4;
protected:
    int b2=5;
public:
    int b3=6;
    B()
    {
        cout<<"Class B is called"<<endl;
    }
};
class C : public B{
    int c1=7;
protected:
    int c2=8;
public:
    int c3=9;
    C(){
        cout<<"Class C is called"<<endl;
    }
    void display(){
        cout<<"Class A protected called by C: "<<a2<<endl;
    }
};
int main(){
    C obj;
    obj.display();
    // cout<<obj.a1;
    // cout<<obj.a2;
    cout<<obj.a3<<endl;
    // cout<<obj.b1;
    // cout<<obj.b2;
    cout<<obj.b3<<endl;
    // cout<<obj.c1;
    // cout<<obj.c2;
    cout<<obj.c3<<endl;
    
    return 0;
}