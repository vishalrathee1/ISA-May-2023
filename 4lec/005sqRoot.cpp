#include <iostream>
using namespace std;

int main(){
	int num; //number whose sq root we have to find
	cin>>num;
	float ctr = 1;
	while(ctr*ctr<=num){
		ctr++; //ctr = ctr +1; numerical part
	}
	cout<<ctr-1<<endl;
	// now you have to find out the ans upto 1 dec place
	ctr--;
	while(ctr*ctr<=num){
		ctr = ctr + 0.1; //first decimal
	}
	cout<<ctr-0.1<<endl;
	ctr = ctr-0.1;
	//for second decimal place
	while(ctr*ctr<=num){
		ctr = ctr + 0.01;
	}
	cout<<ctr-0.01<<endl;
	//for third decimal place
	ctr = ctr - 0.01;
	while (ctr*ctr<=num) {
		ctr = ctr + 0.001;
	}
	cout<<ctr-0.001<<endl;
	ctr = 1;
	// now generalising the above code for n decimal places
	int n;
	cin>>n;
	float inc = 1;
	int i = 0; //it will keep track of the number of decimals we have calculated so far
	while(i<=n){
		while(ctr*ctr<=num){
			ctr = ctr + inc;
		}
		ctr = ctr-inc;
		inc = inc/10;
		i++;
}
	cout<<ctr<<endl;

	return 0;
}
