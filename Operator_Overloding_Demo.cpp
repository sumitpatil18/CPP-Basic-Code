#include<iostream>
using namespace std;
class A{
	public:
    int x,y;
    void accept(int a,int b){
       x=a;
       y=b;
    }
    void A operator +(){

        -x;
        -y;
    }
    void Display(){
        cout<<"Value of a is:"<<x;
        cout<<"Value of b is:"<<y;
    }
};
int main(){
    A a1;
    a1.accept(5,6);
}
