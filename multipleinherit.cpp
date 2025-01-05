#include <iostream>
using namespace std;

class A
{
    int a1 = 1;

protected:
    int a2 = 2;

public:
    A()
    {
        cout << "Class A is called"<<endl;
    }
    int a3=3;
};

class B{
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

class C{
    int c1=7;

protected:
    int c2=8;

public:
    int c3=9;
    C(){
        cout<<"Class C is called"<<endl;
    }

};

class D : private A, protected B, public C{
    public:
    void change(){
        // a1=100; private in class A
        a2=200;
        a3=300;
        // b1=400; private in class B
        b2=500;
        b3=600;
        // c1=700; private in class C
        c2=800;
        c3=900;
    }

    void display(){
        // cout<<a1<<endl; private in class A
        cout<<a2<<endl;
        cout<<a3<<endl;
        // cout<<b1<<endl; private in class B
        cout<<b2<<endl;
        cout<<b3<<endl;
        // cout<<c1<<endl; private in class C
        cout<<c2<<endl;
        cout<<c3<<endl;

    }
};

int main(){

    D obj;
    cout<<obj.c3;//only this is accesible
    obj.display();
    obj.change();
    cout<<endl;
    obj.display();


    return 0;
}