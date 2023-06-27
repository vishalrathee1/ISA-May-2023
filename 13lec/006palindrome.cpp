#include <iostream>
using namespace std;

int lengthOfStr(char str[]){
	int i = 0;
	while(str[i] != '\0'){
		i++;
	}
	return i;
}

void isPalindrome(char str[]){
	int len = lengthOfStr(str); // --> length 
	int s = 0, e = len-1;
	while(s<=e){
	if(str[s] == str[e]){
		s++;
		e--;
	}
	else {
		cout<<"Not Palindrome "<<endl;
		return;
	}
	}
	cout<<"Yes it is Palindrome!"<<endl;
}

int main(){
	char str[100];
	cin.getline(str, 100);
	//cin.getline(str, 100, '$');
	isPalindrome(str);
	return 0;
}
