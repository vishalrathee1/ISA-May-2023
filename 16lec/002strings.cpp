#include <iostream>
#include <cstring>
#include <string>
using namespace std;



int main(){
	//char arr[100] = "hello world";
	
	// in C++ we have a string datatype available to us, which we can use
	// syntax 1
	//string s1 = "Hello ";

	//syntax 2
	//string s2("World");
	//cout<<s1<<endl<<s2<<endl<<s1[0]<<endl<<s1[2]<<endl;

	// advantages 
	// you can perform addition for appending/concatenating,
	// you can alos perform relational operators (comparison of strings)
	
	//string s3 = s1+s2 ; // append/concatenate s2 to s1 and assign it to s3

	//cout<<s3<<endl;

	// s1>=s2 , s1<=s2 
	//s1 = "Hello";
	//s2 = "Hello";
	//cout<<(s1==s2)<<endl;

	// now what if we want to print some part of a string
	//cout<<s1.substr(2)<<endl;
	//cout<<s1.substr(0,2)<<endl; //substr --> starting index, length

	//.length(), .at() s1[2] == s1.at(2);
	

	// taking input using strings
	string s1;
	//cin>>s1;
	// cin.getline(arr, 100, delimitter);
	getline(cin, s1);

	//s1 --> hell
	s1 = s1 +'o';
	s1.push_back('o'); // appends a character at the end

	cout<<s1<<endl;
	s1.pop_back(); // it removes last character
	cout<<s1<<endl;

	return 0;
}
