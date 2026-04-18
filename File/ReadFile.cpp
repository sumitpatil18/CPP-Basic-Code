#include<iostream>
#include<fstream>
using namespace std;
int main(){

    // Open this file in read mode
    ifstream readf("OperationPerform.txt");
    string s;
    getline(readf, s);
    cout<<s;

    //cout<<readf.tellg();
    // readf.seekg(4,ios::big);

    // Open this file inwrite mod:
    //ofstream writef;
    //writef.open("OperationPerform.txt");
    //cout<<writef.tellp();
    //writef.seekp(8,ios::beg);
    //writef<<"Hello Lalit:";
    return 0;
}