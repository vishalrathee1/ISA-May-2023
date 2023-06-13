#include <iostream>
using namespace std;

int main(){
	int n; // for size of array
	cin>>n;
	int arr[n]; //declaring array;
	//taking input
	for(int i =0; i<n ;i++){
		cin>>arr[i];
	}
	cout<<"Enter Element to search "<<endl;
	int search ; 
	cin>>search;
	int i;
	for(i = 0; i<n; i++){
		if(search == arr[i]){
			cout<<"Element found at index: "<<i<<endl;
			break;
		}
	}
	if(i==n) //element is never found
		cout<<"Element Not Found! " <<endl;
	return 0;
}
