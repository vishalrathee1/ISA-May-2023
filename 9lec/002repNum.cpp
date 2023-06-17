#include <iostream>
using namespace std;

int main(){
	int arr[] = {5,3,5,3,7,9};
	int n = sizeof(arr)/sizeof(int);
	int xorr = 0;
	for(int i =0; i< n; i++){
		xorr^=arr[i];
	}
	//find out the first different bit and create a mask for that
	int ct = 0;
	while(xorr){
		if(xorr&1)
			break;
		ct++;
		xorr>>=1;
	}
	int mask = 1<<ct;
	int sett=0,unset=0;
	for(int i =0; i<n; i++){
		if(arr[i] & mask)
			sett^=arr[i];
		else
			unset^=arr[i];
	}

	cout<<sett<<'\t'<<unset<<endl;

	return 0;
}
