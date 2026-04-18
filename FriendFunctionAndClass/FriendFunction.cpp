#include <iostream>
using namespace std;
class A{
	private:
		int a = 10, b = 5;

	public:
		void fun(){
			cout << "Value of a is:" << a;
			cout << "value of b is:" << b;
		}
		//Declaee friend function to requred a Class Object as Parameter...
		friend void funfriend(A obj);
};
void funfriend(A obj){
	//Aceess the private data member by using friend function...
	cout << obj.a;
	cout << obj.b;
}
int main(){
	A a1;
	funfriend(a1);
	return 0;
}
