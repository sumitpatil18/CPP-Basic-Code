#include<iostream>
using namespace std;
int main(){
	int no;
	
	cout<<"Enter the number:";
	cin>>no;
	if(no<1){
		if(no%7==0){
			cout<<"number is prime:";
		}else
			cout<<"Numer is not prime:";
	}
	cout<<"is Not a Prime number:";	
	return 0;
}
