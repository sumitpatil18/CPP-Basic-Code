#include<iostream>
using namespace std;
class CopyConstructor{
	public:
		int a,b;
	CopyConstructor(int x,int y){
		a=x;
		b=y;
		cout<<"Value Of a Is:"<<a<<endl;
		cout<<"Value of b Is:"<<b<<endl;
	}
	CopyConstructor(CopyConstructor &obj){
		cout<<"Value of copy a is:"<<obj.a<<endl;
		cout<<"value of copy b is:"<<obj.b;
	}
};
int main(){
	CopyConstructor d1(10,5);
	//Copy constructor pass a object of class as parameter..
	CopyConstructor d2=d1;
	return 0;
}
