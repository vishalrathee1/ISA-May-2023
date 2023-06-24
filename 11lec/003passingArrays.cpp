#include<iostream>
using namespace std;

void updateArr(int arr2[], int n){
	//increase each value by 10
	for(int i = 0; i<n ; i++){
		arr2[i] += 10;
	}
	//printing
	
	for(int i = 0; i<n ; i++){
		cout<<arr2[i]<<endl;
	}
}

float sumArr(float arr[], int n){
	float arrSum = 0;
	for(int i =0; i<n; i++){
		arrSum += arr[i];
	}
	return arrSum;
}

int main(){
	int arr[] = {1,2,3,4};
	int n = sizeof(arr)/sizeof(int);
	updateArr(arr, n); //passing array
	
	for(int i = 0; i<n ; i++){
		cout<<arr[i]<<endl;
	}

	float arr2[] = {1.2, 2.3, 3.4, 5};
	int n2 = 4;

	float arrSum = 0;

	arrSum  =  sumArr(arr2, n2);
	cout<<arrSum<<endl;
	return 0;
}
