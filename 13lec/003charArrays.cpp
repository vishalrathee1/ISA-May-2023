#include<iostream>
using namespace std;

int main(){
	// arrays syntax --> datatype arrayName[size]; --> declaration
//	char str[3]; // --> declaration
//	arr[0] = 'A'; // definition
//	arr[1] = 'B';
//	arr[2] = 'C';

	//syntax 2
	//char str[3] = {'A', 'B', 'C'}; // --> initializatoin

	// syntax 3
	//char str[] = {'A', 'B', 'C'}; // --> initializatoin
	
	//syntax 4 was using loops for giving size and taking input elements for char array
	int n = 3;
	//char str[n];
	//for(int i =0; i<n; i++){
	//	cin>>str[i];
	//}
	
	int arr[] = {1,2,3};

	cout<<arr<<endl; // --> &arr[0]
	
	//char str[4] = "ABC";  // initialization with strings 
	//char str[] = "Hello World";
	// strings - by default have a null character at their end '\0' ;
	char str[100];
	//int i=0;
//	for(; i<10;i++){
	//	cin>>str[i];
	//}
	//str[i] = '\0';
	
	//cin>>str; // it will keep taking input until it encounters a whitespace character
	//right after whitespace cin was putting null character at the end of the string input

	// now if we want to take input and consider white space also, we will use cin.getline();
	// syntax for cin.getline() function
	// it takes 3 arguments
	// cin.getline(arrayname, max size of that array/ size available/ size of string input, delimiiter)
	// delimitter is optional
	// without delimitter
	// cin.getline(str, 100);
	// cin.getline also puts null char at the end of the string input
	

	// with delimitter --> it tells computer upto which character it has to take input
	// default value of delimiiter is '\n'
	cin.getline(str, 100, '$'); // --> it will take input unitl it encounters $
	
	//cin.getline has same working principle as cin.get
	//int i = 0;
	//str[i] = cin.get();
//	while(str[i]!='$'){
	//	i++;
	//	str[i] = cin.get();
//	}
	//str[i] = '\0';


	cout<<str<<endl; // it will print the value stored in str[0] and then str[1] --> str[2] ... so on until
	// it doesnot find any null character '\0'
	

	//cout<<str[0]<<'\t'<<str[1]<<'\t'<<str[2]<<'\t'<<endl;

	return 0;
}
