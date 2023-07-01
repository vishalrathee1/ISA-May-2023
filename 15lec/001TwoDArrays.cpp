#include<iostream>
using namespace std;

int main(){
	//syntax for 2 D arrays --> 2 D arrays are similar to matrices
	// datatype arrayNAme [rowsize][colSize]; // --> declaration
	// syntax 1
	//int arr[2][2]; // --> 4 memory buckets, 2 rows, 2 cols, --> 2 elements in each row
//	arr[0][0] = 1; // --> first row, first col, 0th row index number, 0th col index number
//	arr[0][1] = 2;
//	arr[1][0] = 3;
//	arr[1][1] = 4;

	//syntax number 2 --> initialization
//	int arr[2][2] = {1,2,3,4};
//	int arr[2][2] = {{1,2},
					// {3,4}};
	//int arr[][2] = {1,2,3,4}; // you can never skip column size in 2D arrays


	//cout<<arr<<'\t'<<arr[1]<<'\t'<<(arr+1)<<endl;
//	cout<<arr[0][0]<<'\t'<<arr[1][1]<<endl;
	
	char arr[][2] = {'A', 'B', 'C', 'D'};
	//char arr[][3] = {"AB" ,"CD"};

	cout<<arr[0][0]<<'\t'<<arr[1][1]<<endl<<arr[0][3]<<endl;
	cout<<arr<<'\t'<<arr[0]<<'\t'<<arr[1]<<endl;



	

	return 0;
}
