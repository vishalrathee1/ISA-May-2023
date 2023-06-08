#include <iostream>
using namespace std;

int main(){
	// &, |, ~, ^, <<, >> --> bitwise operators
	unsigned int a = 13;
	cout<<(5&7)<<endl<<(7&13&17)<<endl;
	cout<<(5|7)<<endl<<(7|13|17)<<endl;
	cout<<(~13)<<endl<<(~1)<<endl<<(~2)<<endl<<(~a)<<endl;
	cout<<(5^7)<<endl<<(7^13^17)<<endl;
	cout<<(2<<5)<<endl<<(17>>3)<<endl;
	return 0;
}
