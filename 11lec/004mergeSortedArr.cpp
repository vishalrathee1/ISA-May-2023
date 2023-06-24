#include <iostream>
using namespace std;

void mergeSortedArr(int a1[], int a2[], int m, int n){
	int i=m-1,j=n-1,k=m+n-1;
	while(i>=0 && j>=0 ){
		if(a1[i]>a2[j]){
			a1[k--] = a1[i--];
		}
		else
			a1[k--] = a2[j--]; 
	}

	// for(int i,j,k; i>=0 && j>=0; k--
}

int main(){
	int m = 5,n=4;
	int a1[m+n] = {1,3,5,7,9};
	int a2[n] = {2,4,6,10};

	mergeSortedArr(a1, a2, m, n);

	for(int i = 0; i<m+n; i++){
		cout<<a1[i]<<'\t';
	}
	cout<<endl;

	return 0;
}
