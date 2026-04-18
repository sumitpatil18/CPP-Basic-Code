#include<iostream>
#include<fstream>
using namespace std;
int main(){
    //If axite file to open file on write mode, else Createn a new file by using the ofsteam class..
    ofstream writef;
    //Open file in append mode Write data in file the file..
    writef.open("hello.txt",ios::app);
    writef<<"\n I am Sumit:";
    writef.close();
    return 0;
}