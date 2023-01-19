#include<iostream>
using namespace std;
 
 int main(){
 	int a,b;
 	cin >> a >>b;
 	int product = a*b;
 	for( int i= 1; i <=product; i++){
 		if(i%a==0 && i%b==0){
 			cout << i <<endl;
 			break;
		 }
	 }
	 return 0;
 }
