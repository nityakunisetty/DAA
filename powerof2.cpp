#include<iostream>
using namespace std;
int main () {
	int n;
	cout<<"enter number: ";
	cin>>n;
	if((n&(n-1))==0) 
	cout<<"the number is a power of 2. ";
	else {
		cout<<"its not a power of 2";
	}
	return 0;
}
