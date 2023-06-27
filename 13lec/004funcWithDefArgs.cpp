#include<iostream>
using namespace std;

//void sum(int a, int b){
//	cout<<a+b<<endl;
//}


//void sum(int a, int b, int c){
//	cout<<a+b+c<<endl;
//}

void sum(int a, int b, int c=0, int d=0){ // now if c and d arguments are not provided, then only c and d will take values as 0.
	cout<<a+b+c+d<<endl;
}

void f(int a=1, float b=1){
	cout<<a*b<<endl;
}

int main(){
	sum(2,3);
	sum(2,3,5);
	sum(2,3,5,7);
	f(); // no arg given
	f(2,3); // both given
	f(3); // only first arg given
	//f(7.3); // trying to give only second arg , it will consider 7.3 as first arg only
	f(1,7.3);
	return 0;
}
