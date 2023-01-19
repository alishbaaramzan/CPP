#include<iostream>
using namespace std;
int binary(int num, int i){
	if(num==0){
		return 0;
	}
	return num%2*i + binary(num/2, i*10);
}
int main(){
	int n;
	cout << "Enter a number: ";
	cin >> n;
	cout << n << " converted to binary is " << binary(n,1) << endl;
	return 0;
	
}
