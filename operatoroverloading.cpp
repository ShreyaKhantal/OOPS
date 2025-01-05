#include <iostream>
using namespace std;

class Complex{//binary operator overloading
    int real;
    int comp;

public:
    Complex() = default;
    Complex(int a, int b) : real(a), comp(b) {}

    Complex operator+(Complex &x){// address of parameters
        Complex c;
        c.real = real + x.real;
        c.comp = comp + x.comp;
        return c;
    }

    void display(){
        cout << real << " + " << comp << "i\n";
    }
};

class A{//unary operator overloading
    int a;

    public:
    A()=default;
    A(int x) : a(x){}

    int operator - (){//parameters should not be present
        // A obj;
        // obj.a = 100-a;
        // return obj;
        a=100-a;
        return a;
    }
    void display(){
        cout<<"a = "<<a<<endl;
    }
};


int main()
{

    Complex a(2, 4);
    Complex b(5, 8);
    Complex c = a + b;
    a.display();
    b.display();
    c.display();

    A o1(56);
    o1.display();
    A o2 = -o1;
    o1.display();
    o2.display();
}