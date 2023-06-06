#include <iostream>
using namespace std;

int main(){
	char ch; //taking character as input
	cin>>ch;
	if(ch>='A' && ch<='Z'){  //implicit type conversion
		cout<<"UpperCase"<<endl;
	}
	else if(ch>='a' and ch<='z'){
		cout<<"LowerCase"<<endl;
	}
	else
		cout<<"Please provide an alphabet"<<endl;

	return 0;
}
