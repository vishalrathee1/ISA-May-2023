#include <iostream>
using namespace std;

void primeOrNot(){
	int n;
	cin>>n;
	int div = 2;
	while(div<=n-1){
		if(n%div == 0)
		{
			cout<<"Not Prime"<<endl;
			break;
		}
		div++;
	}
	if(div == n)
		cout<<"Prime"<<endl;
}

int main(){
	primeOrNot();
	return 0;
}
