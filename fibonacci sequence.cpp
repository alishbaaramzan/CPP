#include <iostream>
using namespace std;

int main(){
	 	int num;
	 	cout << "Enter a number: ";
	 	cin >> num;
	 	while(num/5>=1){
	 		num = num/5;
		 }
		 if(num==1){
		 	cout << "yes";
		 }
		 else{
		 	cout << "no";
		 }
		 return 0;
}     
