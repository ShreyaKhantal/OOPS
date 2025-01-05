#include<iostream>
using namespace std;

class Love{
    int f;
    int m;

public:
    Love()=default;
    Love(int a,int b) : f(a), m(b){}
    void c(){
        cout<<f+m;
    }
};

int main(){
    Love x(1,1);
    Love *p=&x; //class object using pointer
    (*p).c();  cout<<endl; // brackets in *p are necessary
    p->c();    cout<<endl;

    Love *p1=new Love(3,4);//class heap object
    (*p1).c(); cout<<endl;
    p1->c();   cout<<endl;


}