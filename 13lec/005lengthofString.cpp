#include <iostream>
using namespace std;

int lengthOfStr(char str[]){
	int i = 0;
	while(str[i] != '\0'){
		i++;
	}
	return i;
}

int main(){
	char str[100];
	cin.getline(str, 100);
	//cin.getline(str, 100, '$');
	cout<<lengthOfStr(str)<<endl;

	return 0;
}
