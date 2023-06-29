#include <iostream>
#include <climits>
using namespace std;

int main(){
	int arr[] = {5,4,-10,7,8,0,0,0,0,0};
	int n = sizeof(arr)/sizeof(int);
	int ans = INT_MIN;
	int ct = 0; // to check how much time our code is taking
	// loop for subarray starting with value at each index 
	// 1st approach
	for(int i =0; i<n; i++){
		for(int j = i; j<n; j++){
			int sum = 0; // for calc sum of each subarray
			for(int k = i; k<=j; k++){
				ct++;
				sum+=arr[k];
			}
			ans = max(ans, sum);
		}
	}
	
	cout<<ans<<endl<<ct<<endl;

	ct =  0;
	ans = INT_MIN;

	//2nd approach

	for(int i =0; i<n; i++){
		int sum = 0;
		for(int j = i; j<n; j++){
			ct++;
			sum+=arr[j];
			ans = max(ans, sum);
		}
	}
	
	cout<<ans<<endl<<ct<<endl;
	
	ct = 0;
	ans = INT_MIN;
	int csas = 0; //current-sub-array-sum
	//kadane's algorithm
	for(int i =0; i<n; i++){
		ct++;
		csas+=arr[i];
		ans = max(csas, ans);
		if(csas<0)
			csas = 0;
	}
	cout<<ans<<endl<<ct<<endl;
	return 0;
}
