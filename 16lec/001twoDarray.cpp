#include <cstdio>
#include <iostream>
using namespace std;

//void print(int arr[][3], int rows, int cols){}
void print(int (*p)[3], int rows, int cols){} // not really used

int main(){
	int arr[][3] = {1,2,3,4,5,6,7,8,9};
	//cout<<(&arr[0])<<endl<<(&arr[1])<<endl<<(&arr[2])<<endl; //this is due to the fact that array name is pointer to subarrays in case of 2D arrays

	// we can also exploit the fact that they are stored inside a singlerow/singleCol
	//cout<<arr[0][0]<<'\t'<<arr[0][2]<<'\t'<<arr[0][3]<<'\t'<<arr[0][6]<<endl;
	


cout <<arr << endl;  // address of first bucket --> 1
cout << arr+1 << endl; // address of '4'  
cout << *(arr+1) << endl; // expected --> 4 // but got address of 4 instead
cout <<arr[0] << endl; // address of '1'
cout  <<*(arr[0]) << endl; // 1
cout << &arr[0][0] << endl; // address of 1
cout << arr[0] + 1 << endl; // address of 2
cout << (&arr[0][0]) + 1 << endl; // &arr[0][1]
cout << &arr[1][0] << endl; //address of 4


	//passaing 2D arrays to functions
	print(arr, 3, 3);

	// 2D character array
	// syntax 1 --> Declaration --> definition
	//char arr1[2][2];
	//arr1[0][0] = 'A';
	//arr1[1][1] = 'D';
	
	// syntax 2 --> initialization
	//char arr1[][2] = {'A', 'B', 'C', 'D'};
	
	// syntax 3 --> strings syntax
	char arr1[][3] = {"AB", "CD"};

	cout<<arr1[0][0]<<'\t'<<arr1[1][1]<<endl<<arr1<<endl<<arr1[0]<<endl<<arr1[1]<<endl;

	

	return 0;
}
