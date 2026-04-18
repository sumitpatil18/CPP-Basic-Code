#include<iostream>
using namespace std;
class DemoTemplateFun {
	public:
	template <class t>
	t fun(t arg){
		cout<<arg;
		return arg;
	}
};
int main(){
	
	DemoTemplateFun  obj;
	obj.fun<string>("sumit");
	obj.fun<int>(18);
//	DemoTemplateFun <string>obj1("Sumit");
//	DemoTemplateFun <int>obj2(18);
//	DemoTemplateFun <float>obj3(12.8);
	
//	obj1.display();
//	obj2.display();
//	obj3.display();
	return 0;
}