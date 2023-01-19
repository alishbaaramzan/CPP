#include<iostream>
using namespace std;
int decimal(int n, int i){
	if (n==0){
		return 0;
	}
	return ( n%10 * i) + decimal(n/10,i*2);
}
int main(){
	int bin;
	cout << "Enter a binary number: ";
	cin >> bin;
	cout << bin << " converted to decimal is " << decimal(bin,1) << endl;
	return 0;
	
}
