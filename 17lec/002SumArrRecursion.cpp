#include <iostream>
using namespace std;

//this function calculates the sum of elements of array 'arr' from index 0 to index 'ind'
int SumArrRec(int arr[], int ind){ // 4
	if(ind<0) return 0; // base case

	//recursive case
	return arr[ind] + SumArrRec(arr, ind-1); //3
}

//this function calculates the sum of elements of array 'arr' from index ind to 'n' (size of array)
int SumArrRec2(int arr[], int ind, int n){
	if(ind == n) return 0; //base case


	//recursive case --> current element + sumofRestOfTheElements
	return arr[ind] + SumArrRec2(arr, ind+1, n);
}

int SumArrRec3(int arr[], int n){
	if(n==0) return 0;

	return arr[0] + SumArrRec3(arr+1, n-1);
}

int main(){
	int arr[] = {10,2,3,4,5};

	int n = sizeof(arr)/sizeof(int);

	cout<<SumArrRec(arr, n-1)<<endl;
	cout<<SumArrRec2(arr, 0, n)<<endl;
	
	cout<<SumArrRec3(arr, n)<<endl;
	return 0;
}
