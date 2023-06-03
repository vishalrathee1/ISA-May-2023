#include <iostream>
using namespace std;

int main(){
	int lines;
	cin>>lines;

	//task --> spaces first and then stars
	int cur_r=1;
	while(cur_r<=lines){
		//print spaces
		//spaces = lines - cur_r
		int spaces = lines - cur_r;
		while(spaces>0){
			cout<<" ";
			spaces--;
		}

		//printing stars
		//stars --> cur_r
		int stars = 1;
		while(stars<=cur_r){
			cout<<"*";
			stars++;
		}
		cout<<endl;
		cur_r++;
	}

	return 0;
}
