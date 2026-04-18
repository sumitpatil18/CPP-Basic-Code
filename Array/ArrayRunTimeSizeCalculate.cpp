#include<iostream>
using namespace std;
int main(){
	int arr[]={10,40,57,48};
	//size of arr elemnt ( / ) divided size of intger byte = final size
	int size = sizeof(arr)/sizeof(int);
	
	cout<<"Size is : "<<size;
	for(int i=0;i<size;i++){
		cout<<"Elements of "<<arr[i]<<endl;
	}
	return 0;
}
