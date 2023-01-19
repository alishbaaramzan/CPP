#include<iostream>
using namespace std;

int main(){
	float sum = 0;
	for(int i =2; i<=50; i+=2){
		float x = (float)1/i;
		for(int j =1; j <4; j++){
			x*= x;
		}
	sum+= 3*x;
		
	}
	cout << "sum is " << sum <<endl;
	return 0;
}
