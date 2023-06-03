#include <iostream>
using namespace std;

int main(){
	int lines;
	cin>>lines;
	lines=lines/2 + 1;
	int row = 1;

	//upperhalf
	while (row<=lines) {
		int space = lines - row;
		while(space>0){
			cout<<" ";
			space--;
		}
		int star = 1;
		while(star<=2*row - 1){
			cout<<"*";
			star++;
		}
		cout<<endl;
		row++;
	}
	
	//lowerhalf
	row = row - 2;
	while (row>0) {
		int space = lines - row;
		while(space>0){
			cout<<" ";
			space--;
		}
		int star = 1;
		while(star<=2*row - 1){
			cout<<"*";
			star++;
		}
		cout<<endl;
		row--;
	}

	return 0;
}
