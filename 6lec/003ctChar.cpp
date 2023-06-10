#include <iostream>
using namespace std;

int main(){
	//this program doesn't count whitespace but only characters
	int ct = 0;
	char ch;
	cin>>ch; // first character input
	while(ch!='$'){
		ct++; //increasing the count
		cin>>ch; //take new character as input
	}
	cout<<ct<<endl;

	return 0;
}
