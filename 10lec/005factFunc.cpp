#include <iostream>
using namespace std;

int fact (int n){
	int ans = 1;
	while(n){
		ans*=n--;
	}
	//cout<<ans<<endl;
	return ans;
}

int main(){
	int n; //whose factorial we have to calculate
	cin>>n;
	//char ch = 'C';
	int r ;
	cin>>r;

	//cout<<fact(n)<<endl;
	
	// nCr = n!/(r! * (n-r)!)
	int ans = fact(n)/(fact(r) * fact(n-r));
	cout<<ans<<endl;
	
	return 0;
}
