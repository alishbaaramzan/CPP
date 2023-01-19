#include <iostream>
using namespace std;

int main(){
	int num1 = 110;
	int num2 = 101;
	int sum = 0;
	while(num1!=0 && num2!=0){
		int i = num1 % 10;
		int j = num2 % 10;
		if(i==0 && j==0){
			sum = sum*10 + 0;
			num1/=10;
			num2/=10;		
		}
		else if ((i==1 && j==0) || (i==0 && j==1)){
			sum = sum*10 + 1;
			num1/=10;
			num2/=10;
		 }
		 else if (i==1 && j==1){
		 	sum = sum*10 + 10;
		 	num1/=10;
		 	num2/=10;
		 }
}
	cout << "sum is " <<sum <<endl;
}
