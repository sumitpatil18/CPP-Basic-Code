#include<iostream>
using namespace std;
class Animal{
    public:
    virtual void color();
};
class Dog:public Animal{
    public:
    void color() override{
        cout<<"Dog is very bad sound:";       
    }
};
class Cat:public Animal{
    public:
    void color() override{
        cout<<"Cat is very good sound:";
    }
};
int main(){
    Dog d1;
    Cat c1;
    d1.color();
    c1.color();
    
    return 0;
}