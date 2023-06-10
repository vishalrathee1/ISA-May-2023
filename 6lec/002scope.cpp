#include <iostream>
using namespace std;

int x = 77;

int main(){
	//scope of a variable means part of a program where that particular variable is valid
	// scope is defined by a set of curly braces {} 
	int a=10,b=97;
	if(true){
		int b = 25;
		{
			int d = 99;
			cout<<x<<endl<<b<<endl; //77,25
		}
		int d = 2;
		cout<<a<<endl<<b<<endl<<d<<endl; // 10, 25, 2
	}
	if(true){
		int c = 100;
		cout<<a<<endl<<c<<endl; //10, 100
	}

	cout<<a<<endl<<b<<endl; //10, 97
	return 0;
}
