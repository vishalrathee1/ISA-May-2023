#include<iostream>
using namespace std;

int main(){
	//we will print for full hourglass first
	int lines;
	cin>>lines;
	lines = lines/2 + 1;
	int row = 1;
	while(row<=lines){
		//print spaces
		// spaces --> row-1
		int spaces = row -1;
		while(spaces>0){
			cout<<" ";
			spaces--;
		}

		//printing stars
		//stars --> 2*(lines-row) + 1
		//int star = 2*(lines-row) + 1;
		//while(star>0){
		//	cout<<"*";
		//	star--;
		//}

		//above commented out code was for filled hourglass
		//below code is for hollow one
		int star = 2*(lines-row)+1;
		//int first_star = row; // column no of first star 
		//int last_star = 2*lines - row ; //column no. of last star
		while(star>0){
			if( row==1 || star == 2*(lines-row) + 1 || star == 1)
				cout<<"*";
			else
				cout<<" ";
			star--;
		}

		cout<<endl;
		row++;
	}
	
	//lower half 
	row = row -2;
	while(row>0){
		//print spaces
		// spaces --> row-1
		int spaces = row -1;
		while(spaces>0){
			cout<<" ";
			spaces--;
		}

		//printing stars
		//stars --> 2*(lines-row) + 1
		int star = 2*(lines-row) + 1;
		while(star>0){
			cout<<"*";
			star--;
		}
		cout<<endl;
		row--;
	}

	return 0;
}
