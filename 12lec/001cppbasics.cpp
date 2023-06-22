#include<iostream>
using namespace std;

//int a ;
int updation(int a){  //call by value
	//a++;
	//cout<<a<<endl;
	return a++;
}

void updation2(int &a){ //call by reference
	a++;
}

int main(){
	int x = 10;
	// now let us make a function called updation --> which will increase the value of x by 1
	//a = 100;
	cout<<updation(x)<<endl;
	//x = updation(x);
	cout<<x<<endl;

	//reference
	//int &y = x;
	//y++;
	
	updation2(x);
	cout<<x<<endl;
	

	return 0;
}
