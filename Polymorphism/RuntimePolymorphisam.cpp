#include<iostream>
using namespace std;
class A{
	public:
	virtual	void fun(int a,int b){
			//int x=;
			cout<<"Value of A class a is:"<<a<<endl;
			cout<<"Value of A class b is:"<<b<<endl;
		}
};
class B : public A{
	void fun(int a,int b){
		cout<<"Value of B class a is:"<<a;
		cout<<"Value of B class b is:"<<b;
	}
	
};

int main(){
	A *ptr;
	B b1;
	ptr->fun(10,5);
	ptr=&b1;
	ptr->fun(21,5);
	return 0;
}
