#include<iostream>
using namespace std;

int length(char str[]){
	int i =0;
	while(str[i]!='\0'){
		i++;
	}
	return i;
}

void reverse(char str[] ){
		int len = length(str);
		int i =0, j = len-1;
		while(i<=j){
			swap(str[i], str[j]);
			i++; j--;
		}

}

int main(){
	char a[100];
	cin.getline(a, 100);
	//reverse a
	reverse(a);
	cout<<a<<endl;
	return 0;
}
