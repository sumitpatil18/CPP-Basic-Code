#include<iostream>
using namespace std;
// Normal function can be work to define data type and 
//Template function can be used for the no fixed data type value is work any data type 
template <class t> // Syntax off the template declare
t sum(t a,t b){
	//cout<<"Addition of :"<<a+b;
	cout<<a<<b;
}
int main(){
	// pass the this function any data type off value
	sum("Sumit","Patil");
	return 0;
}
