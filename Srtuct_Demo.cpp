#include<iostream>
using namespace std;

struct student{
	public:
	int id;
	string name;
	float fees;

	student(int i,string n,float f){
		id=i;
		name=n;
		fees=f;
		cout<<"Id is :"<<id<<" name is:"<<name<<" fees is:"<<fees;
	}
};
int main(){
	struct student s1(101,"sumit",1500.50);
	return 0;
}
