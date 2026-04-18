#include<iostream>
using namespace std;
class MultipleConstructor{
	public:
		static int d;
		MultipleConstructor(){
			cout<<"Default Constructor:\n";
		}
		MultipleConstructor(int a,int b){
			cout<<"Parameterized Constructor:\n";
			cout<<"Value of a is:"<<a<<endl<<"Value of b is:"<<b<<endl;
		}
		//Distructor call two time because two constructor present in this call
		~MultipleConstructor(){
			d++;
			cout<<"Destructor called default\n";
			cout<<d<<endl;
		}
		
};
int MultipleConstructor::d;
int main(){
	cout<<"Enter the main funtion:\n";
	cout<<"Call default constructor in the main function \n";
	MultipleConstructor d1;
	
	cout<<"Call parameterized constructor:\n";
	MultipleConstructor d2(18,20);
	return 0;
}
