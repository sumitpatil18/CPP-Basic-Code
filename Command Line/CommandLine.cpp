#include<iostream>
using namespace std;
//argc argument counter: How many argument 
//argv argument vector: how array of counter
int main(int argc,char* argv[]){
    cout<<"Number of Count inter the argument:";
	cout<<argc;

    cout<<endl;
    for (int i = 0; i < argc; i++){
        cout<<"Argumrnt of"<<" "<<*argv;
    }
    
}
