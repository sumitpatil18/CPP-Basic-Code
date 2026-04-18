#include<iostream>
using namespace std;
class DemoFri{
	private:
		int a=101;
	//Declare  friend class
	public:
		friend class sample;
};
class sample{
	public:
	void show(DemoFri obj){
		cout<<obj.a;
	}
};
int main(){
	DemoFri obj;
	sample s1;
	s1.show(obj);
	return 0;
}