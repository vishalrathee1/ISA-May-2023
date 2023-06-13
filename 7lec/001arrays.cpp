#include <iostream>
using namespace std;

int main(){
	int st1,st2,st3,st4,st5;
	//cin>>st1>>st2>>st3>>st4>>st5; //taking input of marks of 5 students
	//cout<<st1<<endl<<st2<<endl<<st3<<endl<<st4<<endl<<st5<<endl; //printing marks of 5 students
	//arrays -->  collection of similar type of buckets and all those buckets are referenced by a single name
	//they are called as derived data types because they are derived from primitive data types
	// syntax
	// lets say we want to store marks of 5 students again, but this time using arrays, so their 
	// syntax would be :
	// datatype/BucketType arrayKaNaam[size(optional)]; --> array declared
	int stmarks[5]; //declaration
	// when we write above statement in c++ , compiler assigns a memory equivalent to 5 int buckets that
	// are together in location and the location of 1st bucket(0th house number/ 0th index) is stored in
	// array name (i.e. stmarks in this case)
	// now if we want to access the values or buckets at a particular(aprtment) index what we can do is
	//stmarks --> we found the society / array named stmarks, [0] --> we located the first apartment(0th index)
	// inside that society= 
	stmarks[0] = 10; //definition of 1st bucket , 0th index
	stmarks[1] = 20;
	stmarks[2] = 30;
	stmarks[3] = 40;
	stmarks[4] = 50;

	cout<<stmarks[0]<<endl<<stmarks[1]<<endl;

	//different syntaxes for declaring and defining arrays
	//we will create an array for storing price of diff groc items
	//we dont know the size of array, but we knows the values it is going to contain
	int items[] = {10,12,13,7,9,25,100,113,24};
	cout<<items[8]<<endl;
	//int items2[]; this will be an error because you either provide size or you provide values of array
	//we have to create an array for ages of people in class
	int ages[5] = {18,19,20};
	cout<<ages[4]<<endl;

	//above is declaring and defining syntax
	


	//accessing values syntax
	// arrayName --> go to the array location [index] arrayName[index]
	// index[arrayName] 
	//cout<<0[ages]<<endl; very rarely used syntax
	
	//int favnums[9]; //right here, there will be garbage value stored in fav nums
	//so to remove those garbage values what we can do is
	//int favnums[9] = {0}; // favnums[9] = {}; by these two syntaxes all values will be 0
	int favnums[9] = {1,2,3,4}; //rest all values will be made 0
	//using this loop i can take input
	//for(int index = 0; index<=9-1 ; index++){
	//	cin>>favnums[index];
	//}

	for(int index = 0; index <= 8; index++){
		cout<<favnums[index]<<'\t';
	}
	cout<<endl;

	// same way you can form bool, char , float , double arrays
	//
	// to calculate size of an array, we ca use sizeof operator
	int size = sizeof(items)/sizeof(int); //sizeof(items)/sizeof(items[0])
	cout<<size<<" is Last Index"<<endl;
	
	for(int i =0; i<=size-1 ; i++){
		cout<<items[i]<<'\t';
	}
	cout<<endl;

	// *# Important  // to be explained with pointers
	int important[] = {}; // this is valid
	cout<<important[0]<<endl<<important[1]<<endl<<important[10]<<endl;


	return 0;
}
