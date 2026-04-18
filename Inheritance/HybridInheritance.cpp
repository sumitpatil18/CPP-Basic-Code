#include<iostream>
using namespace std;
class A{
    public:int a=10;
};
class B:public A{
    public:int b=5;
    public:void fun(){
        cout<<"Value of a is:"<<a;
    }
};
class C:public B{
    public:void fun(){
        cout<<"Value of b is:"<<b;
    }
};
class D:public virtual B,virtual C{
    public:void fun(){
        cout<<"Class C"
    } 
};
class E:public D{
    public:void fun(){
        cout<<"class E";
    }
};
int main(){
    E e1;
    e1.fun();
    D d1;
    d1.fun();
    return 0;
}