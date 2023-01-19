#include<iostream>
using namespace std;

int main(){
	int divisor=1, num;
	cin >> num;
	int n = num;
	int count = 0;
	int sum = 0;
	while(num!=0){
		num = num/10;
		count++; 
	}
	for(int i =1; i < count; i++){
		divisor*=10;
	}
	while(n!=0){
		int digit = n/divisor;
		cout << digit << " ";
		sum+=digit;
		n = n%divisor;
		divisor/=10;
	}
	cout << endl;
	cout << "Sum is " <<sum <<endl;
	return 0;
}
	
	
