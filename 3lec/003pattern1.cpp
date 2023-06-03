#include<iostream>
using namespace std;

int main(){
	int lines;
	cin>>lines;
	int c_r = 1;
	while(c_r<=lines){
		int star = 1;
		while(star<=c_r){
			cout<<"*";
			star++;
		}
		cout<<endl;
		c_r++;
	}
	return 0;
}
