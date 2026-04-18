#include<iostream>
using namespace std;
class Add{
    public:
    //Method overrinding 
    int funAdd(int a,int b){
        return a+b;
    }
    double funAdd(double a,double b){
        return a+b;
    }
};
int main(){
    Add a1;
    cout<<a1.funAdd(10,5);
    cout<<"\n"<<a1.funAdd(20.5,10.4);
    return 0;
}