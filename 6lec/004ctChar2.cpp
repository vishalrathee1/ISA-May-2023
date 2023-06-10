#include <iostream>
using namespace std;

int main(){
	int ctdig = 0, ctalpha=0, ctws=0, ctspchar = 0;
	char ch;
	// to count whitespaces also we use another method/function called cin.get()
	ch = cin.get();
	while(ch!='$'){
		if(ch>='0' &&ch<='9')
			ctdig++;
		else if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
			ctalpha++;
		else if( ch ==' ' || ch == '\t' || ch == '\n')
			ctws++;
		else
			ctspchar++;
		ch = cin.get();
	}
	cout<<ctdig<<endl<<ctalpha<<endl<<ctws<<endl<<ctspchar<<endl;
	return 0;
}
