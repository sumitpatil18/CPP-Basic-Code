#include<iostream>
using namespace std;
class A{
	public:
	void fun(int a,int b){
		cout<<"Value of a is:"<<a<<endl;
		cout<<"Value of b is:"<<b<<endl;
	}
	void fun(double a,double b){
		cout<<"Value Of a is:"<<a<<endl;
		cout<<"Value Of b is:"<<b<<endl;
	}
};
int main(){
	A a1;
	a1.fun(10,50);
	a1.fun(12.5,78.5);
	return 0;
}
