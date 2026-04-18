#include<iostream>
using namespace std;
class DemoOperator{
	
	public:
		int real,img;
		DemoOperator(int x,int y){
			real=x;
			img=y;
		}
		DemoOperator operator+(DemoOperator z){
			return DemoOperator(real=real+z.real,img=img+z.img);
		}
};
int main(){
	DemoOperator d1(10,5);
	DemoOperator d2(21,22);
	DemoOperator d3=d1+d2;
	cout<<d3.real<<endl<<d3.img;
	return 0;
}
