#include <iostream>
using namespace std;

int main(){
	int a = 1,b=0,c=-1,d=2;
	if(a++ && b++ && c++ && d--){
		cout<<"Hello"<<endl;
	}
	else if(--a && --b && ++c && --d){
		cout<<"World"<<endl;
	}
	else if( --a || b++ || ++c ){
		cout<<"Hii"<<endl;
	}
	else
		cout<<"Welcome to coding Blocks"<<endl;
	cout<<a<<endl<<b<<endl<<c<<endl<<d<<endl;
	return 0;
}
