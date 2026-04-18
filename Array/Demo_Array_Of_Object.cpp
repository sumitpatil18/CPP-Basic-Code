#include<iostream>
using namespace std;
class Dem0_Array_Of_Object{
    public:
    string empName;
    int empAge;
    int empSalary;
    int mobileNumber;
	void getdata();
	void display();
};
void Dem0_Array_Of_Object::getdata(){
	cout<<"Enter the Emloyee Name:";
	cin>>empName;
	cout<<endl;
    cout<<"Enter the Employee Salary:";
    cin>>empSalary;
	cout<<endl;
    cout<<"Enter The Employee Age";
    cin>>empAge;
  	cout<<endl<<"--------------------------------------"<<endl;
};
void Dem0_Array_Of_Object::display(){
    	cout<<"Employee Name is:"<<empName;
    	cout<<"Employee Salary is:"<<empSalary;
    	cout<<"Employee Age is:"<<empAge;
};
int main(){
    Dem0_Array_Of_Object a1[4];
    for(int i=0;i<4;i++){
    	a1[i].getdata();
	}
	for(int i=0;i<4;i++){
    	a1[i].display();	
	}
     return 0;
}