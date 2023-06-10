#include<iostream>
using namespace std;

int main(){
	int x=0,y=0;  //for final position that we will reach by following our friends directions
	char ch;
	ch = cin.get(); // it is for condition to check the end of the input
	while(ch!= ' ' && ch != '\t' && ch != '\n'){
		if(ch == 'N')  // this is for +ive y axis
			y++;
		else if(ch == 'S') // this is for -ive y axis
			y--;
		else if(ch == 'E')  // this is for +ive x axis
			x++;
		else   // left is for -ive x axis
			x--;
		ch = cin.get();
	}
	//we have the final coordinates of final position
	//now the only step left is to print them with E,N,S,W order acordingly
	
	//first quadrant
	if(x>=0 && y>=0){
		//print E and N only in answer

		//printing E first
		for(int i =0; i<x; i++){
			cout<<'E';
		}

		//printing N
		for(int i =0; i<y; i++){
			cout<<'N';
		}
	}
	//for second quadrant 
	else if(x<=0 && y>=0){
		//we will only print N and W

		//printing N first
		for(int i =0; i<y ; i++){
			cout<<'N';
		}

		//printing W 
		x*=-1; //converting x into +ive
		for(int i =0; i<x ; i++){
			cout<<'W';
		}
	}
	//for third quadrant
	else if(x<=0 && y<=0){
		//print only S and W
		
		//printing S first
		y*=-1;
		for(int i =0; i<y; i++){
			cout<<'S';
		}

		//printing W
		x*=-1;
		for(int i =0; i<x ; i++){
			cout<<'W';
		}
	}
	//last or 4th quad
	else{
		//printing E and S

		//printing E first
		for(int i =0; i<x ; i++){
			cout<<'E';
		}

		//printing S
		y*=-1;
		for(int i =0; i<y; i++){
			cout<<'S';
		}
	}
	cout<<endl;


	return 0;
}
