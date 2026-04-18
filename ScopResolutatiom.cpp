#include<iostream>
using namespace std;
class student
{
	private:
		int id ,fees;
		static int add ;
		char name[25];
			
	public :
	//	void getData();
	//	void setData();
		//void Addition();
		void getData()
{
	cout<<"\n Enter the ID:";
	cin>>id;
	cout<< "Enter The Name :";
	cin>>name;
	cout<<"\n Enter Your Fees : ";
	cin>>fees;
}
void setData()
{
	cout<<"\n ID OF Student :"<<id<<"\n Name Of Student:"<<name<<"\n Fees Of Student"<<fees;
//	add=add+fees;
//	cout<<"\n Addition Of Fees"<<add;

	
}

//int student::add=0;
};

int main()
{
	student s[3];
	for(int i=0;i<=2;i++)
	{
		s[i].getData();
	}
	for(int i=0;i<=2;i++)
	{
		s[i].setData();
	}
	return 0;
}