#include<iostream>
using namespace std;
class A{
    public:
    void fun(){
        cout<<"Class A:\n";
    }
};
class B :public A{
    public:
    void fun(){
        cout<<"Class B:";
    }
};
int main(){
    B b;
    b.A::fun();
    b.fun();
    return 0;
}