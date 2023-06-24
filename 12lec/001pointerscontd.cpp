#include<iostream>
using namespace std; 

void inc(int*a){
	(*a)++;
}

void incArr(int *, int);


int main(){
	int a = 10;
	float b = 10.0;
	bool c = true;
	double d = 10.00;

	int * aptr = &a;

	//cout<<aptr<<'\t'<<&a<<endl;
	//cout<<&aptr<<endl; // &--> address of operator // this will print address of aptr
	int* *aptrptr=&aptr; //double pointer
	//cout<<aptrptr<<endl;
	//cout<<&aptrptr<<endl;
	int** *  a3ptr=&aptrptr;	//triple pointer
	//cout<<a3ptr<<endl; // so similarly we can go like this upto n pointers (as much as our memory allows us)
	int x2=1,x3=2,x4=4;
	// syntax for declaring multiple pointers
	int *x2ptr=&x2, *x3ptr = &x3, *x4ptr = &x4;
	x2ptr = &a; //changing the address stored inside x2ptr

	// int * x2ptr=&x2, x3ptr = &x3, x4ptr = & x4; // so here only x2ptr will be a pointer, x3 and x4 will be int buckets
	

	char ch = 'A';
	//cout<<ch<<'\t'<<&ch<<'\t';
	char * chptr=&ch;
	//cout<<chptr<<endl;
//
	// we need to fool the compiler to print the address of ch variable
	// we need to make compiler think that it is not a char variable
	
	//cout<<(int *)&ch<<'\t';
	//cout<<(bool *)&ch<<'\t';
//	cout<<(double *)chptr<<'\t';
//	cout<<(void *)chptr<<endl;


	//Dereferncing
	//* --> used for Dereferncing values
	//if 'a' is a variable and 'aptr' is a pointer variable that stores address of a
	// if we do (*aptr) --> a
	//
	//cout<<a<<'\t'<<(*aptr)++<<'\t'<<a<<endl;


	//Null initialization of pointer
	int y=10;
	//int*yptr;
	//uninitialized pointer dereferencing can either run the code or give seg fault
	//cout<<(*yptr)*2<<endl;
	int*yptr=0; // NULL -->  always gives segmentation fault
//	cout<<(*yptr)*2<<endl;

	int arr[] = {10,20,30,40};
	cout<<arr<<endl;
	//int * arrptr = &arr[0];
	//cout<<arrptr<<endl;

	int narr[] = {};// it was creating pointer, that's why it was valid narr[1] , narr[10]

	//arithmetic in pointers
	int z = 10;
	int *zptr = &z;
	cout<<&z<<'\t'<<zptr<<'\t'<<zptr+1<<'\t'<<&zptr[2]<<'\t';
	cout<<endl;

	int *arptr = arr; //&arr[0]
	cout<<arptr<<'\t'<<arr<<'\t'<<arptr+1<<'\t'<<arr+1<<'\t'<<*arptr+1<<'\t'<<*arr+1<<'\t'<<arptr[2]<<'\t'<<arr[2]<<endl;
	// so syntax of accessing elements of array follows the pointer arithmetic
	inc(&z);
	cout<<z<<endl;
	//incArr(arr, 4); //passing array name

	//for(int i = 0; i<4; i++){
	//	cout<<arr[i]<<'\t';
	//}
	//cout<<endl;
	incArr(arptr, 4);

	for(int i = 0; i<4; i++){
		cout<<arr[i]<<'\t';
	}
	cout<<endl;

	int *nptr = arr+3;
	cout<<nptr-arr<<endl; //3



	return 0;
}

//int arr[]
//void incArr(int *arrptr, int n){
//	for(int i = 0; i<n; i++){
//		(*(arrptr+i))++;
//	}
//}

void incArr(int arr[], int n){
	for(int i =0; i<n; i++){
		arr[i]--;
	}
}



