#include<iostream>
using namespace std;

class DemoStatic{
	public:
		int id;
		string name;
		static int fees;
	void setData(){
		cout<<"Enter the value of ID;";
		cin>>id;
		cout<<"Enter the value of name:";
		cin>>name;
		cout<<"Enter the fees:";
		cin>>fees;
	}
	void getData(){
		cout<<"Value of Id is:"<<id<<endl;
		cout<<"Value of Name is:"<<name<<endl;
		cout<<"Value of fees is:"<<fees;
	}
};
int DemoStatic::fees=0;

int main(){
	DemoStatic d1;
	d1.setData();
	d1.getData();
	return 0;
}
