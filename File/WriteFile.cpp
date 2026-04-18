#include<iostream>
#include<fstream>
using namespace std;
int main(){
    //If axite file to open file on write mode, else Createn a new file by using the ofsteam class
    ofstream writef("OperationPerform3.txt");
    //Write data in the file
    writef<<"Hello Sumit";

    //writef.open("OperationPerform.txt");
    //cout<<writef.tellp();
    
    return 0;
}