#include<iostream>
#include<fstream>
using namespace std;
int main(){
    
    ofstream writef("hello.txt",ios::app);
    writef<<"Hiii Lalit,Narendra,Sumit";
    writef<<"Hello KBCNMu";
    writef.close();

    return 0;
}