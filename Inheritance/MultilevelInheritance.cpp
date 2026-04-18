#include<iostream>
using namespace std;
class A{
    // Declare data member in class A
    public:int a=10,b=5;
    public:void fun(int a,int b){
        cout<<"Class A";
    }
};
class B:public A{
    public : void funAdd(){
        cout<<"Class B \n";
        // Used a class A data member in class B it's a Inheritance..
        a+=b;
        cout<<"Addition of:"<<a;
    }
};
class C:public B{
    public : void fun(){
        cout<<"Class C \n";
    }
};
int main(){
    //int a
    C c1;
    c1.fun();
    c1.funAdd();
    return 0;
}