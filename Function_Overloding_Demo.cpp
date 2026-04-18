#include<iostream>
using namespace std;
// Function overloding 
class Demo{
    public:
    void fun1(){
        cout<<"This is a fun1:\n";
    }
    void fun1(int x){
        cout<<"Is a x value:\n"<<x;
    }
    void fun1(double y){
        cout<<"is a y value y is;"<<y;
    }
};
int main(){
    Demo obj;
    obj.fun1();
    obj.fun1(5);
    obj.fun1(2.0);
}