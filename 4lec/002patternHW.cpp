#include <iostream>
using namespace std;

int main(){
	int lines;
	cin>>lines;
	//first step is write the code of stars pattern pyramid
	int r = 1;
	while(r<=lines){
		//spaces print
		int space = lines - r;
		while(space>0){
			cout<<" ";
			space--;
		}
		//stars print 
		//no of stars will be equal to row no.
		int star = r;
		//while(star>0){
		//	cout<<"*";
		//	star--;
	//	}
		//now lets do this for numbers
		int num = r;
		while(star>0){
			cout<<num;
			num++;  //for increasing order
			star--;
		}
		num = num - 2;
		
		//hash print 
		//no of hashes will be equal to row no - 1
		int hash = r - 1;
		//while(hash>0){
		//	cout<<"#";
		//	hash--;
		//}
		//printing numbers instead of hash
		//now in decreasing order
		while(hash>0){
			cout<<num;
			num--;  //for decreasing order
			hash--;
		}
	

		cout<<endl;
		r++;
	}
	return 0;
}
