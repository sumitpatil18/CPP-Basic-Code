#include<iostream>
using namespace std;
class A{
	private:
		int a=10,b=15;
	public:
	friend	void fun(A obj);
};
void fun(A obj){
	cout<<obj.a;
	cout<<obj.b;
	
}
int main(){
	A obj;
	fun(obj);
	return 0;
}