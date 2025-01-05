#include<iostream>
using namespace std;

class Base{
    int x;

    public:
    Base() = default;

    virtual void disp(){
        cout<<"Base Class\n";
    }
};

class Base2 : public Base{
    int y;

    public:
    Base2() = default;

    void disp(){
        cout<<"Base2 Class\n";
    }
};

class Derived : public Base2{
    int z;

    public:
    Derived() = default;

    void disp(){
        cout<<"Derived class\n";
    }
};

class Derived2 : public Derived{
    int z;

    public:
    Derived2() = default;

    void disp(){
        cout<<"Derived2 class\n";
    }
};

int main(){
    // Derived o1;

    // Base *p = &o1;
    // p->disp();
    // if we call using pointer it results in calling of base function
    // if we call using pointer by making base class virtual , derived class is called

    // o1.disp();
    // o1.Base::disp();

    Derived obj;
    Base2*x=&obj;
    x->disp();

    return 0;
}