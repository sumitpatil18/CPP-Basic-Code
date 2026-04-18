#include<iostream>
using namespace std;
class A{
	public:
		int a=10;
};
class B:virtual public A{
	public:
	void show(){
		cout<<"value class B of a is:"<<a<<endl;	
	}
};
class C:virtual public A{
	public:
	void show(){
		cout<<"value class C of a is:"<<a<<endl;	
	}
};
class D:public B,public C{
	public:
	//void show(){
	//	int c=5;
	//	cout<<"Value D of a is:"<<a;
	//}
};
int main(){

	D d1;
	d1.show();
	
	 
	return 0;
}
