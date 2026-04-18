#include<iostream>
using namespace std;
template <class t>
class DemoTemplate{
	public:
		t str;
		demoTemplate(t value){
			str=value;
		}
		void diplay(){
			cout<<str;
		}
};
int main(){
	DemoTemplate <int>obj1(10);
	DemoTemplate <string>obj2("Sumit");
	DemoTemplate <float>obj3(12.2);
	obj1.diplay();
	obj2.diplay();
	obj3.diplay();
	return 0;
}