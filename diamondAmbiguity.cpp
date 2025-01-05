#include<iostream>
using namespace std;
class A{
    public:
    int a=10;
    A() = default;
    void disp(){
        cout<<"A Class\n";
    }
};
class B : virtual public A{//inheriting class as virtual
public:
    int x;
    B() = default;
};
class C : virtual public A{
    public:
    int y;
    C() = default;
};
class D :public B,public C{
    int z;
    public:
    D() = default;
};
int main(){
    D o1;
    o1.disp();// if classes are not virtually inherited then it would show error
    return 0;
}