#include<iostream>
using namespace std;

int length(char str[]){
	int i =0;
	while(str[i]!='\0'){
		i++;
	}
	return i;
}

void append(char a[], char b[]){
	//we will req len of a and len of b
	int la = length(a), lb = length(b);
	// take two pointers i, j for a,b
	int i = la, j = 0;
	for(;j<lb;j++){
		a[i] = b[j];
		i++;
	}
	a[i] = '\0';
}

int main(){
	char a[100];
	char b[100];
	
	//input strings
	cin.getline(a, 100);
	cin.getline(b, 100);

	// append b to the end of a
	append(a, b);
	cout<<a<<endl<<b<<endl;


	return 0;
}
