#include<iostream>
using namespace std;
class ConstruDemo{
	public:
	ConstruDemo(){
		int a=10,b=5,c=0;
		c=a+b;
		cout<<"Addition of:"<<c<<endl;
	}
	ConstruDemo(int x,int y){
		cout<<"Value of x is "<<x<<" and y is "<<y;
	}
};
int main(){
	ConstruDemo c1;
	ConstruDemo (40,50);
	return 0;
}
