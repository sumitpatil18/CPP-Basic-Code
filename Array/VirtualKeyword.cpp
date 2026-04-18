#include<iostream>
using namespace std;
class A{
	//a is define parrent class
	public:
int a=10;
};
//  used virtual keyword to in memory create single copy and avoid diamond problem
class B:virtual public A{
	public:
};
//  used virtual keyword to in memory create single copy and avoid diamond problem
class C :virtual public A{
	public:
	
};
class D:public B,public C{
	public:
	// retrive the value of a
	void fun(){
		cout<<"Value of "<<a;
	}
};
int main (){
	D d1;
	d1.fun();
	return 0;
}
