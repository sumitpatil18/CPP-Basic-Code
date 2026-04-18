#include<iostream>
using namespace std;

void fun(){
    
    int num,fact=1;
    cout<<"Enter the number for factorial calculate:";
    cin>>num;

    for(int i=1;i<=num;i++){
        fact=i*fact;
    }
    cout<<"Factorial is: "<<fact<<endl;
}
int main(){
    fun();
    return 0;
}