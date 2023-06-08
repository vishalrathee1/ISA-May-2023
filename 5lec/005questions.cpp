#include<iostream>
using namespace std;

int main(){
	// given n numbers all numbers appearing twice, only 1 number is appearing once

	int n;
	cin>>n;
	int first;
	cin>>first;
	int ct = 1;
	while(ct<n){
		int newnum;
		cin>>newnum;
		first = first^newnum;
		ct++;
	}
	cout<<first<<endl;

	//count the number of set bits( no of 1's ) in binary rep of a given number
	int num;
	cin>>num;
	ct = 0;

	while(num!=0){
		if(num&1 != 0)
			ct++;
	//right shift the num 1 times
		num = num>>1;
	}
	cout<<ct<<endl;

	return 0;
}
