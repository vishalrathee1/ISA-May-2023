#include <iostream>
using namespace std;

int main(){
	//int arr[] = {3,1,5,6,4,2,9};
	//int arr[] = {5,4,3,2,1};
	int arr[] = {9,1,8,2,7,3,4,5,6,10};
	int ct = 0;
	int n = sizeof(arr)/sizeof(int);
	
	for(int i =1 ; i<n; i++){
		int j = i-1;
		//for(int j = i-1; j>=0; j--)
		//if(arr[j]>arr[j+]
		//swap
		//else
		//break
		while(j>=0 && ++ct && arr[j]>arr[j+1]){
			//ct++;
			swap(arr[j],arr[j+1]);
			j--;
		}
	}

	for(int i =0; i<n ; i++){
		cout<<arr[i]<<'\t';
	}
	cout<<endl<<ct<<endl;


	for(int i =1 ; i<n; i++){
		int key = arr[i];
		int j = i-1;
		//shifing method for insertion sort
		while(j>=0 && arr[j]>key){
			//swap(arr[j],arr[j+1]);
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = key;
	}

	return 0;
}
