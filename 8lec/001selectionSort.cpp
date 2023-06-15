#include <iostream>
#include <string>
using namespace std;

int main(){
	//int arr[] = {2,5,-9,11,6,3,1,-13};
	//calc the size of array
	//int arr[] = {5,4,3,2,1}; --> 14
	int arr[] = {1,2,3,4,5}; // -->14
	int ct = 0;
	int n = sizeof(arr)/sizeof(int); //size of array
	
	//for each index from 0 to n-2 (n-1 elements) we will find smallest element on the right
	for(int i =0; i< n-1; i++){
		//go to right and check
		for(int j = i; j<n; j++){
			ct++;
			//if arr[j] < arr[i] , interchange them
			if(arr[j] < arr[i]){
				//swap the values
				//swapping logic
				//temp variable, a=arr[j], b= arr[i]
				//int temp = arr[j];
				//arr[j] = arr[i];
				//arr[i] = temp;
				//using one line swap
				//arr[i] = arr[j] + arr[i] - (arr[j] = arr[i]);
				swap(arr[i],arr[j]);  //inbuilt swap function
			}
		}
	}
	//after reaching here my array will be sorted
	for(int i = 0; i<n; i++){
		cout<<arr[i]<<'\t';
	}
	cout<<endl<<ct<<endl;
	//int b;
	//cout<<(b=10)<<endl;

	return 0;
}
