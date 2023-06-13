#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	//input of array
	for(int i =0; i<n; i++){
		cin>>arr[i];
	}
	int largest = arr[0]; //int largest = INT_MIN (-ive infinity);
	for(int i =1 ; i<n; i++){
		if(arr[i]>largest)
			largest = arr[i];
	}
	cout<<largest<<endl;
	return 0;
}
