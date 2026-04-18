#include<iostream>
using namespace std;

class A {
    int a;
    public:
    virtual void getdata(){
        cout<<"Enter the Value of A : ";
        cin>>a;
    }
    virtual void putdata(){
        cout<<"value of A is : "<<a;
    }
};

class B : public A{
    int b;
      void getdata(){
        cout<<"Enter the value of B : ";
        cin>>b;
    }

    void putdata(){
        cout<<"Value of b is : "<<b;
    }
};

class C : public A{
    int c;
    public:
    void getdata(){
        cout<<"Enter the value of C : ";
        cin>>c;
    }
    void putdata(){
        cout<<"Value of c is : "<<c;
    }
};
int main() {
    A* obj = new C();
    obj->getdata();
    obj->putdata();
}