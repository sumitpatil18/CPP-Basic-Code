#include<iostream>
using namespace std;

class Complex{
	public:
		int real,img;
	Complex(int x,int y){
		real=x;
		img=y;
	}
	// operator overload:
	Complex operator+(Complex obj){
		int sumR=real+obj.real;
		int sumI=img+obj.img;
		cout<<"Value of real:"<<sumR<<endl;
		cout<<"Value of img:"<<sumI<<"i";
		// return Complex(img+obj.img, real+obj.real);
	}
};
int main(){
	Complex c1(2,4),c2(10,5);
	Complex c3=c1+c2;
	
	return 0;
}
