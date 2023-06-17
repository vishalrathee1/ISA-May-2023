#include <iostream>
using namespace std;

int main(){
	int ast[] = {-19,-9,-90,-13,-27,-6,-5,-1,-90};
	int n = sizeof(ast)/sizeof(int);

	for(int i =1; i<n; i++){
		int j = i-1;
		while(ast[j]>=0 && ast[i]<0)  //collision condition
		{
			if(-1*ast[i]<ast[j]){
				ast[i] = 0;
				break;
			}
			else if(-1*ast[i] == ast[j]) {
				//equal in magnitude
				//both will get destroyed
				ast[i] = ast[j] = 0;
				break;
			}
			else{
				// ast[j] is smaller in magnitude, so will get destroyed
				ast[j] = 0;
				j--;
			}
		}

	}

	for(int i =0; i<n; i++){
		if(ast[i] != 0)
			cout<<ast[i]<<'\t';
	}
	cout<<endl;
	return 0;
}
