#include<iostream>
using namespace std;

int main(){
	int num;
	int power;
	cout << "Enter x: ";
	cin >>num;
	cout << "Enter power: ";
	cin >> power;
	int n = num-2;
	float sum = 0;
	for(int i = 2; i <= power; i+=2){
		int factorial= 1;
		for(int j = 1; j<i ; j++ ){
		n *= (n*n);
	}
	for(int k =1; k <= i ;  k++ ){
		factorial*=k;
	}
	sum+= (float)num/factorial;
}
	cout << "Sum is " << sum <<endl;
	return 0;
}
