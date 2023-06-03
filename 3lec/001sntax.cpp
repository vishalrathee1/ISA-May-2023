#include<iostream>
#include <ostream>
using namespace std;

int main(){ // --> starting point
	//input le skte hai user se
	//output kr skte hai
	//value / data store kr skte hai
	//arithmetic operations kr skte hai
	//conditional execution
	//repeat a set of instructions
	// we use comments to explain our code to other people and most importantly ourselves
	// single line comments   starts with //
	// multiline comments  /**/
	/*  --> opening or start of multi line comment
	 this
	 is a multi line 
	   comment  -->end of multi line comment 
	return 0; */
	//to make space for data
	/*bucketkatype  bucketkanaam;  --> declaration
	bucketkanaam = kuch value  --> defintion

	bucketkatype bucketkanaam = kuch value --> initialization
	int, char, bool, float , double --> bucket ke types
	bucketkanaam comes under identifiers -->  first character of identifier should be in 'a' to 'z' or 
	'A' to 'Z' or '_' , later characters can be anything from 'a' to 'z' , 'A' to 'Z' , 0 to 9, '_' */
	//int a1=0; //--valid
	//char _1; //--valid
	//float _f1; //--valid
	//double D; //--valid
	//a1=10;
	//_1 = 'A';
	//_f1 = 3.33;
	//D = 24.34567;
	
	//taking input from user
	//cin --> console se input
	//cin>>a1; //--> int
	//cin>>_1; //--> character
	//cin>>_f1; // --> floating number
	//cin>>D; //double
	//cin>>a1>>_1>>_f1>>D;
	//cout<<a1<<endl<<_1<<endl<<_f1<<endl<<D<<endl;
	cout<<"Hello World"<<'\n'<<10<<endl<<'A'<<endl<<23.24<<endl;

	//different arithmetic operators -->  +, -, *, /, % --> modulus operator (it tells us remainder)
	//
	cout<<3+4<<endl<<3-1<<endl<<3*4<<endl<<4%3<<endl<<3%4<<endl<<3/4<<endl<<4/3<<endl<<9/3<<endl;

	//conditional execution of statements
	// we use if, if-else, if-else if-else blocks
	
	if (3+4==5) {  //--> condition means something that will evaluate either to true/1(any non zero value also) or false/0
		cout<<"Hello"<<endl;  // --> task we have to complete / perform when our condition is met
	}
	else { //when if condition fails we will come to else block
		cout<<"World"<<endl;
	}

	//if else if else
	//lets say you have different students who have different marks
	//90 above you have to grade them A
	//80-90 B
	//70-80 C
	//60-70 D
	//40-60 Less than first division D-
	//<40 fail F
	
	int marks;
	cin>>marks;
	if(marks>=90 && marks<=100){
		cout<<'A'<<endl;
	}
	else if(marks<90 && marks>=80){
		cout<<'B'<<endl;
	}
	else if(marks>=70 and marks<80){
		cout<<'C'<<endl;
	}
	else if(marks>=60 && marks<70){
		cout<<'D'<<endl;
	}
	else if(marks>=40 && marks<60){
		cout<<"D-"<<endl;
	}
	else if(marks>=0 && marks<40){
		cout<<"Fail"<<endl;
	}
	else{
		cout<<"Please provide valid marks"<<endl;
	}
	
	if('A'){
		cout<<"Hello"<<endl;	
	}
	//print numbers from 1 to n
	int n;
	cin>>n;
	//initialization
	int i = 1;
	while (i<=n) {  // as long as this condition holds it will execute
		cout<<i<<endl;// task
		//updation
		i++;
		//i = i+1;
		//i++ is faster than i = i+1;
		//i++ --> unary operator , incrementer 
		// unary operators are operators which need only 1 operand
		// ++, --  -->  pre increment ++i --> if r.n i = 4  and i do cout<<++i -->5 , post increment i++
		// if r.n i = 4 and i do cout<<i++ --> 4
		
	}

	return 0; //ending point
}
