#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream writef;
    //Open file in open mode by using the opne() method
    writef.open("hello.txt");  
    cout<<"Opene the file"<<endl;
    
    return 0;
}