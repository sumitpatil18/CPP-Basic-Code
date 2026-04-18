#include<iostream>
using namespace std;
class A{
    public:
    int a=10;
};
class B:public virtual A{
    public:
    void fun(){
        cout<<"Value of a in B class"<<a;
    }
};
class C: public virtual A{
    public:
    void fun(){
        cout<<"Value of a in c class"<<a;
    }
};
class D:public C,B{
   
};
int main(){
    int a,b;
    D d1;
    d1.fun();
    return 0;
}