#include <iostream>
using namespace std;

int main(){

	//pattern 
	//sum of row & col == even then we print 1 else 0
	int lines;
	cin>>lines;
	for(int r = 1; r<=lines ; r++){
		// now for each row
		for(int c = 1; c<=r; c++){
			if((r+c)%2 == 0)
				cout<<1;
			else
				cout<<0;
		}
		cout<<endl;
	}

	return 0;
}
