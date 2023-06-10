#include<iostream>
using namespace std;

int main(){
	for(int i =0; i<5; i++){
		if(i == 2)
			continue;
		cout<<i<<'\t';
	}
	cout<<endl;
	for(int i = 0; i< 5; i++){
		if(i == 2)
			break;
		cout<<"Hello"<<endl;
	}
	return 0;
}
