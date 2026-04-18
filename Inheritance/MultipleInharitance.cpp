#include<iostream>
using namespace std;
class A{
    public:
    
    void fun(){
        cout<<"Class A:\n";
    }
};
class B{
    public:
    void fun(){
        cout<<"Class B:\n";
    }
};
class C:public A,public B{
    public:
    void fun(){
        cout<<"Class C:";
    }
};
int main(){
    C c1;
    c1.A::fun();
    c1.B::fun();
    c1.fun();
}