#include<iostream>
#include<list>
using namespace std;
int main(){
	list<string>str={"Lalit","Narendra","Kunal","Uday","Abhi"};
	//Insert the element to list first possition by using the push_front() method
	str.push_front("Sumit");
	// Insert the element to list to last posssition by using the push_back method
	str.push_back("Dip");
	for(string s:str){
		cout<<"Values Of str is:"<<s<<endl;
	}
	
	//Remove the element from first possition
	str.pop_front();
	// Remove the element from last possition
	str.pop_back();
	for(string s:str){
		cout<<s<<endl;
	}
	return 0;
}