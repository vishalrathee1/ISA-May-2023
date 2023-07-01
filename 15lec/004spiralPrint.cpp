#include<iostream>
using namespace std;

int main(){
	int arr[3][5] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
	int r = 3, c= 5;
	int strow = 0, enrow = r-1, stcol = 0, encol = c-1;

	while(strow<=enrow && stcol<=encol){
	// first row --> left to right // --> strow
		for(int i =stcol; i<=encol; i++){
			cout<<arr[strow][i]<<'\t'; //--> first row all elements
		}
		strow++; // 1

	// last column --> top to bottom // --> ending column
		for( int i = strow; i<=enrow; i++){
			cout<<arr[i][encol]<<'\t'; //--> last column all elements
		}
		encol--; // c-2

	// last row --> right to left // enrow
		for(int i = encol; i>=stcol; i--){
			cout<<arr[enrow][i]<<'\t'; //--> last row all elements
		}
		enrow--; // r-2

	// first column --> bottom to top // stcol
		for(int i =enrow; i>=strow ; i--){
			cout<<arr[i][stcol]<<'\t'; //--> first column all elements
		}
		stcol++;
	}
	cout<<endl;
	return 0;
}
