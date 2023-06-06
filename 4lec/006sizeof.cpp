#include <iostream>
using namespace std;

int main(){
	cout<<sizeof(int)<<endl<<sizeof(float)<<endl<<sizeof(double)<<endl<<sizeof(bool)<<endl<<sizeof(char)<<endl;
	int a = 10;
	float b = 1.23;
	bool isNight = true;
	cout<<sizeof(a)<<endl<<sizeof(b)<<endl<<sizeof(isNight)<<endl;
	cout<<sizeof(long)<<endl<<sizeof(long long)<<endl;
	return 0;
}
