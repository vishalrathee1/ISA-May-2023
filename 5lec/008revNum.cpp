#include<iostream>
using namespace std;

int main(){
	int num;
	cin>>num;
	int rev = 0;
	
	//until num becomes 0
	for( ; num>0; num/=10){

		rev += num%10;
		rev *= 10;
		//num/=10; //updation
	}
	cout<<rev/10<<endl;

	return 0;
}
