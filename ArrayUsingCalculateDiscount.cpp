#include<iostream>
using namespace std;

class ArrayEleDiscount{
	public:
	
	void calArray(int arr[], int size){
		for(int i=0;i<=size-1;i++){
			int dis=arr[i]/10;
			arr[i]=arr[i]-dis;
			cout<<"Array After Discount"<<arr[i]<<endl;
		}
	}
};
int main(){
	int price[]={100,150,350,400,250,20,45,45};
	int size = sizeof(price);
	int length = sizeof(price)/sizeof(int);	
	ArrayEleDiscount a1;
	//Its print number of eSlement bytes size, one integer 4 byte into number of elements byte
	cout<<"Size of array is : "<<size<<endl;
	cout<<"Length of array is : "<<length<<endl;
	a1.calArray(price,length);
	return 0;
}
