#include <iostream>
using namespace std;

int main(){
	for(int i =1; i<=0; i++){
		cout<<"Hello World"<<endl;
	}
	int  i =1;
	while(i<=0){
		cout<<"Hello there!"<<endl;
		i++;
	}
	do {
		//task
		cout<<"Hello matey!"<<endl;
		i++;
	}while (i<=0);
	
	char ch = 'A';
	//cin>>ch;

	if(ch == 'A' )
		cout<<"Apples"<<endl;
	else if(ch == 'B')
		cout<<"Bananas"<<endl;
	else if(ch == 'C' )
		cout<<"Meow"<<endl;
	else if(ch == 'D')
		cout<<"Woof" <<endl;
	else if(ch == 'E')
		cout<<"Elephant!"<<endl;
	else
		cout<<"Type something Interesting"<<endl;

	switch (ch) {
		case 'A' : cout<<"Apples"<<endl;
				   break;
		case 'B' : cout<<"Bananas"<<endl;
				   break;
		case 'C' : cout<<"Meow"<<endl;
				   break;
		case 'D' : cout<<"Woof"<<endl;
				   break;
		case 'E' : cout<<"Elephant"<<endl;
				   break;
		default  : cout<<"Type something Interesting!"<<endl;
	}

	//Tertiary operators
	
	int x = 10;
	//(x<=10) ? (cout<<"Hello There!"<<endl) : (cout<<"Hii"<<endl) ;
	int y = 5;

	(x<10) ? (  (y<=5)?(cout<<"Hello There!"<<endl):(cout<<"Meow"<<endl)  ) : ((y>5)?(cout<<"Hii"<<endl): (cout<<"Woof"<<endl) );

	return 0;
}
