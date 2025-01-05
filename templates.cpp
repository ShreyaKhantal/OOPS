#include<iostream>
using namespace std;

// defining simply template
template <typename T> 
T mymax(T x, T y){
    return ( x > y ) ? x : y;
}

template<class shreya> // typename or class can be used interchangeably
shreya add(shreya a, shreya b){
    return a+b;
}

// overloading template functions
// it is also possible that one function is not template based
template<typename A, typename B>
void fun(A x, B y){
    cout<<x<<" "<<y<<endl;
}

template<typename A>
void fun(A x){
    cout<<x<<endl;
}

// template for a class
template<class type>
class Hello{
public:
    type hi(type x,type y){
        type a = x + y;
        return a;
    }
};

// template for class example 2
template <class T>
class vector{
    public:
    T * a;
    int size;
    vector(int x) { // constructor
        size=x;
        a= new T[size];
    }
    T dotproduct(vector &v){ // function
        T ans=0;
        for(int i=0; i<size;i++){
            ans += a[i]*v.a[i];
        }
        return ans;
    }
};

template <class a, class b>
class my{
    public:
    a data1;
    b data2;
    my(a x, b y){
        data1=x;
        data2=y;
    }
    void display(){
        cout<<data1<<" "<<data2<<endl;
    }
};

//parameterized default template
template<class a = int, class b = float, class c = char>
class Life{
    a p;
    b q;
    c r;
    public:
    Life(a x, b y, c z) : p(x),q(y),r(z){}
    void show(){
        cout<<p<<" "<<q<<" "<<r<<endl;
    }
};

//defining member function outside class
template <class T>
class A{
    public:
        T data;
        A(T x);
        void display();
        void add(T y);
};
template <class W>// constructor defined outside 
A<W>::A(W x){
    data=x;
}
template<class T>// we can use same type name T as of class
void A<T>::display(){
    cout<<"Data is "<<data<<endl;
}
template<class P>// we can also use different type name here P instead of T as in class
void A<P>::add(P y){
    cout<<"After Adding "<<data+y<<endl;
}


template <typename t> 
t multiply (t num1,t num2) { return num1*num2; }

template<typename t>
class Student{
    private:
       t total_marks;
    public:
       Student(t x) : total_marks(x) {}
};


//defining static variable outside the class
template <typename Q>
class Test{
    public:
    static int count;
    void show(){
        cout<<"Count is "<<count<<endl;
    }
};
template <typename R>
int Test<R>::count=50;

int main(){
    int a=5,b=10;
    float c=45.23,d=86.3;
    cout<<add(a,b)<<endl;
    cout<<add(c,d)<<endl;

    fun(5,"string");
    fun(8.45);

    Hello <string> obj;
    cout<<obj.hi("abcde","cd")<<endl;

    vector <float> v1(3);
    v1.a[0]=1.5;
    v1.a[1]=2;
    v1.a[2]=3;
    vector <float> v2(3);
    v2.a[0]=1.6;
    v2.a[1]=0;
    v2.a[2]=5.54;
    cout<<v1.dotproduct(v2)<<endl;

    Life <> o1(4,4.5,'a');//as already default so takes data type by default 
    o1.show();
    Life <char> o2('A',5.3,'B');//only first is changed other are default
    o2.show();

    A <int> object(5);
    object.display();

    A <string> addobj("Shreya ");
    addobj.add("Khantal");
    
    my <int,float> object1(1,5.30);
    object1.display();

    cout<<multiply(20, 5)<<endl; //calling function without specifying data type, it deduces data type itself
    // Student stu(24); not available for all compilers
    cout<<Test <string> ::count;
    return 0;
}