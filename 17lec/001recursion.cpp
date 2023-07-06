#include<iostream>
using namespace std;


int factorial0(int n){ //0
	//0! -->1 
	return 1;
}

int factorial1(int n){ //1
	// 1! --> 1*0!
	return 1*factorial0(0);
}
int factorial2(int n){ //2
	// 2! --> 2*1!
	return 2*factorial1(1);
}

int factorial3(int n){ //3
	// 3! --> 3*2!
	return 3*factorial2(2);
}

int factorial4(int n){ //4
	// 4! --> 4*3!
	return 4*factorial3(3);
}

int factorial5(int n){ //5
	// 5! --> 5*4!
	return 5*factorial4(4);
}

//Factorial(n) calculates the factorial of a number n
//
int Factorial(int n){
	if(n==0) return 1; // base case

	//recursive case
	return n*Factorial(n-1); //5*4!, 4*3!, 3*2!, 2*1!, 1*0!, 0! --> 1
}

int main(){
	// 5! --> calculate
	cout<<factorial5(5)<<endl;
	cout<<Factorial(5)<<endl;
	return 0;
}
