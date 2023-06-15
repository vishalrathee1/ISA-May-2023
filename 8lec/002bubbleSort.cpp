#include <iostream>
using namespace std;

int main(){
	int arr[] = {9,5,4,3,2,1};
	//we started with i =0 upto i = n-2 and compared adjacent elements
	int n = sizeof(arr)/sizeof(int); //size
	for(int i =0; i<n-1; i++){ // i ki range 0 to 4
		if(arr[i] > arr[i+1]){
			//swap the values
			arr[i+1] = arr[i] + arr[i+1] - (arr[i] = arr[i+1]);
		}
	}
	for(int i =0; i<n ; i++){
		cout<<arr[i]<<'\t';
	}
	cout<<endl;

	// now here if we take i from 0 to 3 it will place second largest element in its right position
	
	for(int i =0; i<n-2; i++){ // i ki range 0 to 4
		if(arr[i] > arr[i+1]){
			//swap the values
			arr[i+1] = arr[i] + arr[i+1] - (arr[i] = arr[i+1]);
		}
	}
	for(int i =0; i<n ; i++){
		cout<<arr[i]<<'\t';
	}
	cout<<endl;

	//for third largest i will go from 0 to n-3
	
	for(int i =0; i<n-3; i++){ // i ki range 0 to 4
		if(arr[i] > arr[i+1]){
			//swap the values
			arr[i+1] = arr[i] + arr[i+1] - (arr[i] = arr[i+1]);
		}
	}
	for(int i =0; i<n ; i++){
		cout<<arr[i]<<'\t';
	}
	cout<<endl;

	
	for(int i =0; i<n-4; i++){ // i ki range 0 to 4
		if(arr[i] > arr[i+1]){
			//swap the values
			arr[i+1] = arr[i] + arr[i+1] - (arr[i] = arr[i+1]);
		}
	}
	for(int i =0; i<n ; i++){
		cout<<arr[i]<<'\t';
	}
	cout<<endl;


	for(int i =0; i<n-5; i++){ // i ki range 0 to 4
		if(arr[i] > arr[i+1]){
			//swap the values
			arr[i+1] = arr[i] + arr[i+1] - (arr[i] = arr[i+1]);
		}
	}
	for(int i =0; i<n ; i++){
		cout<<arr[i]<<'\t';
	}
	cout<<endl;

	//int arr1[] = {9,-19,2,5,19,56,13,0,-36};
	//int arr1[] = {5,4,3,2,1};
	int arr1[] = {9,1,8,2,7,3,4,5,6,10};
	int ct = 0;
	//nested loop bubble sort
	n = sizeof(arr1)/sizeof(int);

	for(int i =0; i<n-1; i++){
		bool isSwapped = false; //this is for optimised bubble sort
		for(int j =0; j<n-i-1; j++){
			ct++;
			if(arr1[j]>arr1[j+1])
			{
				isSwapped = true;
				swap(arr1[j], arr1[j+1]);
			}
		
		}
		if(!isSwapped) // aarray is now sorted
			break;
	}

	for(int i =0; i<n; i++){
		cout<<arr1[i]<<'\t';
	}

	cout<<endl<<ct<<endl;

	return 0;
}
