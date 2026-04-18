#include<iostream>
using namespace std;
class DemoStaticFu{
	public:
	static string name;
	static void demoFun(){
		int id;
		cout<<"Enter the id:";
		cin>>id;
		cout<<"Enter the name:";
		cin>>name;
		
		cout<<"Vallue of id is:"<<id;
		cout<<"Value of name is:"<<name;
	}
};
string DemoStaticFu::name;

int main(){
	DemoStaticFu::demoFun();
		return 0;
}
