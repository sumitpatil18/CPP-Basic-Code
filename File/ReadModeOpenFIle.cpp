#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream readf("hello.txt");
    string s;
    
    //readf>>s;    : this can be read only first word in the file
    // read all word in one line on file by using getline()
    getline(readf,s);
    cout<<s;
    //close file
    readf.close();
    return 0;
}