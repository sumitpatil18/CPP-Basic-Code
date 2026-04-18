#include<iostream>
using namespace std;
class DemoStaticDataMember{
	public:
	static int count;
	void fun(){
		count++;
		cout<<count;
	}
};
int DemoStaticDataMember::count=0;

int main(){
	DemoStaticDataMember obj;
	obj.fun();
	obj.fun();
	obj.fun();
	return 0;
}