#include<iostream>
using namespace std;

int length(char str[]){
	int i =0;
	while(str[i]!='\0'){
		i++;
	}
	return i;
}

void content(char str[], int frArray[]){
	int len = length(str);
	for(int i =0; i< len; i++){
		frArray[str[i]-'a']++;
	}
}

bool eqlcontent(int freqArr1[], int freqArr2[]){
	// 26 size loop will check each value stored in them
	for(int i =0; i<26; i++){
		if(freqArr1[i] != freqArr2[i]) // return false if any value mismatches
			return false;
	}
	return true;
}

int main(){
	char str1[100];
	char str2[100];
	
	//input strings
	cin.getline(str1, 100);
	cin.getline(str2, 100);

	int frstr1[26] = {};
	int frstr2[26] = {};

	// find out the content of each string 
	content(str1, frstr1);
	content(str2, frstr2);

	//check if the content is equal or not
	bool ans = eqlcontent(frstr1, frstr2);
	if(ans) cout<<"Permuations of each other"<<endl;
	else cout<<"Not Permuations of each other"<<endl;

	return 0;
}
