#include<iostream>
using namespace std;
class A{
	public:
		int a=10;
};
class B : virtual public A{
	public:
	void showB(){
		cout<<"Value Of B class a/:"<<a<<endl;
	}
};
class C :virtual public A{
	public:
	void showC(){
		cout<<"Value of C class a:"<<a<<endl;
	}
};
class D:virtual public B,public C{
	public:
	void showD(){
		cout<<"Value Of D class a:"<<a;
	}
};
int main (){
	D obj;
	obj.showB();
	obj.showC();
	obj.showD();
	return 0;
}