#include <iostream>
using namespace std;

// this function is printing values from 'val' to 'n'
void printOneToN(int n, int val){
	
	if(val>n) return;

	//print present val
	cout<<val<<'\t';
	//print rest of the values by recursoin
	printOneToN(n, val+1);
}

// this function prints value from 'n' to '1'
void printNtoOne(int n){
	if(n==0) return;
	//print current value
	cout<<n<<'\t';
	//print rest of the values by recursoin
	printNtoOne(n-1);
}

void printOneToN2(int n){
	if(n==0) return;
	//print current value
	//print rest of the values by recursoin
	printOneToN2(n-1);
	cout<<n<<'\t';
}

int main(){
	int n;
	cin>>n;
	printOneToN(n, 1);
	cout<<endl;
	n=7;
	printNtoOne(n);
	cout<<endl;
	printOneToN2(n);
	cout<<endl;
	return 0;
}
