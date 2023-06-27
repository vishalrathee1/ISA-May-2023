#include<iostream>
using namespace std;

void sumOfArr(int arr[], int n){
	int summ = 0;
	for(int i = 0; i<n; i++){
		summ+=arr[i];
	}
	cout<<summ<<endl;
}

int main(){
	int arr[] = {1,2,3,4,5,6};
	int n = 6;
	//sumOfArr(arr,n);//
	sumOfArr(arr+5, n);
	sumOfArr(arr+5, n-5);

	int a = 10;
	int *aptr = &a;
	cout<<aptr[0]<<'\t'<<aptr[1]<<endl;

	return 0;
}
