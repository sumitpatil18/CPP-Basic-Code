#include<iostream>
using namespace std;
class A{
    public:
    void fun1(){
        cout<<"A class";
        //cout<<" Value Of x Is:"<<x;
    }
};
class B :public A{
    public:
    void fun1(){
        cout<<"B class";
        //cout<<"Value of x Is:"<<x;
    }
};
class C: public A{
    fun1(){
        cout<<"C class";
    }
};
int main(){
    C::A obj;
    obj.fun1();
}