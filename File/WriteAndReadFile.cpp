#include <iostream>
#include <fstream>
using namespace std;
int main(){
  ofstream writefile;
  // create file
  writefile.open("newHello2.txt");
  cout << "File succesfull create... \n";
  // Write some text in the file
  writefile << "Hello Sumit How are you";

  // open the file in read mode
  ifstream fileread;
  fileread.open("newHello.txt");
  string s;
  getline(fileread, s);
  cout << s;
  cout<<"\n Read data successfull...";
  fileread.close();
  return 0;
}