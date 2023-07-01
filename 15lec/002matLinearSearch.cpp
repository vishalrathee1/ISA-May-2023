#include<iostream>
using namespace std;

int main(){
	int r,c;
	cin>>r>>c;
	int arr[r][c];
	// have to input elements in this 2 d array
	for(int i =0; i<r; i++){
		for(int j = 0; j<c; j++){
			cin>>arr[i][j]; 
		}
	}
	int etf;
	cin>>etf;
	bool found = false;
	for(int i =0; i<r; i++){
		for(int j = 0; j<c; j++){
			if(arr[i][j] == etf){
				cout<<etf<<" found at "<<i+1<<" row and "<<j+1<<" column"<<endl;
				found = true;
				break;
			}
		}
		if(found) break;
	}
	if(!found) cout<<"Element is Not present in matrix"<<endl;
	return 0;
}
