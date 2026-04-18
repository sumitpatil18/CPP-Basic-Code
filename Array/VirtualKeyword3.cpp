#include<iostream>
using namespace std;
class A{
	public:
		int a=10;
};
class B:virtual public A{
	public:
	void show(){
		cout<<"value class B of a is"<<a;	
	}
};
class C:virtual public A{
	public:
	void show(){
		cout<<"value class C of a is"<<a;	
	}
};
class D:public B,public C{
	public:
	void show(){
		cout<<"Value D of a is:"<<a;
	}
};
int main(){
	 B b1;
	 b1.show();
	 C c1;
	 c1.show();
	return 0;
}
