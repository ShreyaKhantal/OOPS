#include <iostream>
using namespace std;

class A
{
    int a = 1;

protected:
    int b = 2;

public:
    A()
    {
        cout << "A is called" << endl;
    }
    int c = 3;
};

class B : public A
{
    int x;

protected:
    int y;

public:
    int z = 6;
    B()
    {
        cout << "B is called" << endl;
    }
    void change()
    {
        // a=100;   invalid as it is private in A so we cannot access it
        b = 200;     // protected is accessible
        c = b + 300; // public is accesible obviously yrr
    }
};

class C : protected A
{
    int p = 10;

protected:
    int q = 20;

public:
    int r = 30;
    C()
    {
        cout << "C is called" << endl;
    }
    void change()
    {
        // a=100;   invalid as it is private in A so we cannot access it
        b = 200;     // protected is accessible
        r = b + 300; // public is accesible obviously yrr
    }
};

class D : private A{
    int d1=50;

protected:
    int d2=60;

public:
    int d3=70;
    D()
    {
        cout << "D is called" << endl;
    }
    void change()
    {
        // a=100;   invalid as it is private in A so we cannot access it
        b = 200;     // protected is accessible
        d3 = c + 300; // public is accesible obviously yrr
        cout<<"Protected object of class A in D: "<<b<<endl;
    }

};

int main(){
    A obj1;

    // calling object of class A
    // cout << obj1.a;  private in class
    // cout << obj1.b;  protected in class
    cout << "A public: " << obj1.c << endl;
    cout<<"\n";

    B obj2;
    // calling of class B
    //  cout << obj2.a;  A-private B-public
    //  cout << obj2.b;  A-protected B-public
    cout << "A-public called by object from B: " << obj2.c << endl;
    obj2.change();
    cout << "A-public called by object from B after function calling: " << obj2.c << endl;
    // cout << obj2.x;  private in class
    // cout << obj2.y;  protected in class
    cout << "B-public: " << obj2.z<<endl;
    cout<<"\n";

    C obj3;
    // calling of class C
    // Nothing is accesible as everything in protected mode except for class' public object itself
    // cout << obj3.a;
    // cout << obj3.b;
    // cout << obj3.c;
    // cout << obj3.p;
    // cout << obj3.q;
    cout << "A-public called by C: " << obj3.r<<endl;
    obj3.change();
    cout << "A-public called by C after function: " << obj3.r<<endl;

    cout<<"\n";
    D obj4;
    // calling of class C
    // Nothing is accesible as everything in private mode except for class' public object itself
    // cout << obj4.a;
    // cout << obj4.b;
    // cout << obj4.c;
    // cout << obj4.d1;
    // cout << obj4.d2;
    cout << "A-public called by C: " << obj4.d3<<endl;
    obj4.change();
    cout << "A-public called by C after function: " << obj4.d3<<endl;

    return 0;
}