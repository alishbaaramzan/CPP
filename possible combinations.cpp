#include<iostream>
using namespace std;

int main(){
	int num;
	cout << "Enter a 3 digit number: ";
	cin >> num; 
	for(int i= 0; i < 2; i++) {
		for(int i = 0; i <3 ; i++){
		int x = num%100; 
		int y = num/100; 
		num = x*10 + y;
		cout << num <<endl; 
	}
	int z = (num%100)/10; 
	num = z*100 + (num/100)*10 + (num%10); 
	}
	return 0;
}
