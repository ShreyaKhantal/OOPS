#include <iostream>
using namespace std;

class Hello
{
    int x;
    int y;
    int z;

public:
    // Hello(int a , int b , int c) : x(a), y(b), z(c) {}
    // void set(int a){
    //     this->x=a;
    // }
    // void sety(int b){
    //     this->y=b;
    // }
    Hello &setX(int a){
        x = a;
        return *this;
    }
    Hello &setY(int b){
        y = b;
        return *this;
    }
    Hello &setZ(int c){
        z = c;
        return *this;
    }

    void get(){
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
        cout << "z = " << z << endl;
    }
};

int main(){
    Hello obj;
    obj.setX(20).setY(10).setZ(5);
    obj.get();

    return 0;
}