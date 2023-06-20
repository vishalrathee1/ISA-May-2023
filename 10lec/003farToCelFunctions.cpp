#include<iostream>
using namespace std;

void farToCelsiusFunc(){

	int iv, fv, sv;  // initial value , final value , step value
	cin>>iv>>fv>>sv;
	//we have to print the conversion table for farhenheit to celsius
	int ctr = iv; //for looping over all values in range [iv,fv]
	while (ctr<=fv) {
		//convert this farh temp into celsius and display it
		int cel = (5.0/9)*(ctr-32);   //changing 5 to 5.0 is called as explicit typecasting or type conversion
		//typecasting or type conversion is basically nothing but converting one bucket type into another
		//float cel = (5.0/9)*(ctr-32);
		cout<<ctr<<"    "<<cel<<endl;
		//updation of ctr value
		ctr = ctr + sv;
	}
}

int main(){
	farToCelsiusFunc();
	return 0;
}
