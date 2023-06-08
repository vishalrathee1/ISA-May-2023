#include <iostream>
using namespace std;

int main(){
	// set the last set bet from right to 0
	int num;
	cin>>num;
	num = num&(num-1);
	cout<<num<<endl;
	return 0;
}
