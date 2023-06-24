#include<iostream>
using namespace std;

int main(){
	int a=10;
	float b = 12.0;
	bool c  = true;
	double d = 12.35;

	// now to print that address we use & operator
	cout<<&a<<endl;
	cout<<&b<<endl;
	cout<<&c<<endl;
	cout<<&d<<endl;

	//pointers
	//syntax --> (datatype) * (pointerName) = &variable
	int * aptr = &a;
	float* bptr = &b;
	bool *cptr = &c;
	double*dptr = &d;

	cout<<aptr<<endl;
	cout<<bptr<<endl;
	cout<<cptr<<endl;
	cout<<dptr<<endl;

	cout<<sizeof(aptr)<<'\t'<<sizeof(cptr)<<endl;

	return 0;
}
