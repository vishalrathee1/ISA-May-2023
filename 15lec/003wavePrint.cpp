#include<iostream>
using namespace std;

int main(){
	int arr[][3] = {1,2,3,4,5,6,7,8,9};
	int r = 3, c= 3;
	//wave print --> print columnwise in form of a wave
	for(int j =0; j<c; j++){ // j--> column
		if(j%2 == 0) // even column number means top to bottom
		{
			for(int i = 0; i<r; i++){ // i--> row
				cout<<arr[i][j]<<'\t';
			}
		}
		else{
			// bottom to top
			for(int i = r-1; i>=0; i--){
				cout<<arr[i][j]<<'\t';
			}
		}
	}
	cout<<endl;
	return 0;
}
