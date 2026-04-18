#include<iostream>
using namespace std;

class ParameterizedConstructor{
	public:
		ParameterizedConstructor(int a,int b){
			cout<<"Constructor called\n";
			cout<<"Value Of a is:"<<a<<endl<<"Value Of b is:"<<b<<endl;
		}
		// Distructor Call automatically by using ~ symbol
		~ParameterizedConstructor(){
			cout<<"Destructor called\n";
		}
};
int main(){
	cout<<"Enter the main function:\n";
	ParameterizedConstructor d1(10,5);
	cout<<"Exit the main function:\n";
	return 0;
}
