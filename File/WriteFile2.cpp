#include<iostream>
#include<fstream>
using namespace std;
int main(){
    //If axite file to open file on write mode, else Createn a new file by using the ofsteam class
    ofstream writefile;
    writefile.open("Sumit.txt");
    writefile<<"Hello KBCNMU Jalgaon";
    writefile.close();
    cout<<"File create succesfully";
}