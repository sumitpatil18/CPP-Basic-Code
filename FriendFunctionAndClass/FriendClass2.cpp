#include<iostream>
using namespace std;

class DemoFriClass{
	private:
		int id=101;
		string name="Sumit";
		
		void baseFu(){
			cout<<"Hii sumit";
		}
	public:
		
		friend class SampleFriClass;
};
class SampleFriClass{
	public:
	// As a argument pass Class Object
	void showData(DemoFriClass d){
		cout<<"Id is a:"<<d.id<<endl;
		cout<<"Name is a:"<<d.name<<endl;
		d.baseFu();	
	}
	
};
int main(){
	DemoFriClass d1;
	SampleFriClass s1;
	s1.showData(d1);
	return 0;

}
