#include <algorithm>
#include<iostream>
using namespace std;

int length(char str[]){
	int i =0;
	while(str[i]!='\0'){
		i++;
	}
	return i;
}

void copy(char to[], char from[], int sizeofFrom){  //copy char arr from into to
	int i = 0;
	for(; i<sizeofFrom; i++){
		to[i] = from[i];
	}
	to[i] = '\0';
}

int main(){
	int n;
	cin>>n;
	cin.ignore();
	char a[100] = {'\0'};
	char largestStr[100] = {'\0'};
	int maxlen = 0;
	//input string number 1
	cin.getline(a, 100);
	// maxlen will be initialized with the length of first string
	maxlen = length(a);
	// largestStr will be initialized with the first string and after that we will run a loop
	copy(largestStr, a, length(a));
	
	for(int i =0; i<n-1; i++){
		cin.getline(a, 100);
		int len = length(a);
		if(len>maxlen){
				maxlen = len;
				copy(largestStr, a, len);
		}
	}

	cout<<largestStr<<endl<<maxlen<<endl;


	return 0;
}
