#include <iostream>
using namespace std;

int main(){
	int lines;
	cin>>lines;
	int r = 1;
	while(r<=lines){
		int c = 1;
		while(c<=r){
			if((c+r)%2==0){
				cout<<1;
			}
			else
				cout<<0;
			c++;
		}
		cout<<endl;
		r++;
	}
	cout<<endl;
	//second approach
	//if we find out the first character then we can generate the subsequent pattern
	r = 1;
	int f_c = 1;
	while(r<=lines){
		if(r%2==0)
			f_c = 0;
		else
			f_c = 1;
		int c = 1;
		while(c<=r){
			cout<<f_c;
			//changing 1 into 0 or 0 into 1
			if(f_c == 1)
				f_c = 0;
			else
				f_c = 1;
			c++;
		}
		cout<<endl;
		r++;
	}

	return 0;
}
