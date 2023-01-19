#include<iostream>
using namespace std;

int main(){
	int num1, num2,limit;
	int factor= 0;
	cout << "Enter two numbers:";
	cin >> num1 >> num2;
	if(num1>num2){
		limit=num1;
	}
	else{
		limit = num2;
	}
	for(int i = 1; i<= limit; i++){
		if(num1%i==0 && num2%i==0 ){
			factor= i;
		}
	}
	cout << "HCF is " << factor <<endl;
	return 0;
	
	
}
