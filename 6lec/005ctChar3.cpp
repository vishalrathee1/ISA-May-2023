#include <iostream>
using namespace std;

int main(){
	int ctchar =0, ctword = 1, ctlines = 1;
	char ch;
	ch = cin.get();
	while(ch != '$'){
		if(ch == ' ' || ch == '\t' || ch == '\n'){  //it signifies start of a new word
			ctword++;
		}
		if(ch == '\n')  // it signifies start of a new line
			ctlines++;
		ctchar++;
		ch = cin.get();
	}
	cout<<"No. of chars: "<<ctchar<<endl;
	cout<<"No. of words: "<<ctword<<endl;
	cout<<"No. of lines: "<<ctlines<<endl;

	return 0;
}
