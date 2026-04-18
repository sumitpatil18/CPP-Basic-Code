#include<iostream>
using namespace std;
class ConstructorDistructor{
	public:
	ConstructorDistructor(){
		cout<<"Call the  a Constructor:\n";
	}
	~ConstructorDistructor(){
		cout<<"Call the Destructor:\n";
	}
};


int main(){
	cout<<"Enter the main function:\n";
	
	// When create a dyanamic object of the constructor , to destructor is not callautomaticaly
	// used to delect keyword using the call the destructor
	ConstructorDistructor *d1=new ConstructorDistructor;
	cout<<"Exit the main function:\n";
	delete d1;
	return 0;
}
