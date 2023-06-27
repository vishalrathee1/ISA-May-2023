#include <iostream>
using namespace std;

int main(){
	int arr[] = {1,2,3,5,7,9,11,13};
	int etf; //element to find
	cin>>etf;
	int n = 8;
	int s = 0,e = n-1;
	int ct = 0; // to check comparisons

	//loop
	while(s<=e){
	ct++;
	int mid = (e+s)/2;

	if(arr[mid] == etf){
		cout<<"Element Found at Index: "<<mid<<endl;
		break;
	}
	else if(arr[mid] > etf)
		e = mid-1;
	else 
		s = mid+1;
	}
	if(s>e) 
		cout<<"Element was never found in arr!"<<endl;
	cout<<ct<<endl;
	return 0;
}
