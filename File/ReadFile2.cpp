#include<iostream>
#include<fstream>
using namespace std;
int main(){
    
    ifstream readfile;
    //Open file on read mode by using the ifstream class obj through
    readfile.open("Sumit.txt");
    string s;
    getline(readfile,s);
    cout<<s;
    readfile.close();
    cout<<"read file succesfull:";

}