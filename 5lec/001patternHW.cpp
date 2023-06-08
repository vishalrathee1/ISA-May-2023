#include <iostream>
using namespace std;

int main(){
	int lines;
	cin>>lines;
	int row = 1;
	//for upper half of the pattern
	while(row<=lines){
		//printing stars
		int star = row;
		while(star>0){
			cout<<"*";
			star--;
		}
		
		//printing spaces, spaces == 2*lines - 1 - 2*rowno.
		int spaces = 2*lines - 2*row -1;
		while(spaces>0){
			cout<<" ";
			spaces--;
		}

		//printing hashes
		int hash = row;
		if(row == lines)
			hash--;
		while(hash>0){
			cout<<"#";
			hash--;
		}
		cout<<endl;
		row++;
	}
		
	//for lower half
	row = row -2;
	while(row>0){
		//printing stars
		int star = row;
		while(star>0){
			cout<<"*";
			star--;
		}
		
		//printing spaces, spaces == 2*lines - 1 - 2*rowno.
		int spaces = 2*lines - 2*row -1;
		while(spaces>0){
			cout<<" ";
			spaces--;
		}

		//printing hashes
		int hash = row;
		if(row == lines)
			hash--;
		while(hash>0){
			cout<<"#";
			hash--;
		}
		cout<<endl;
		row--;
	}
	return 0;
}
