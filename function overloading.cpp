#include<iostream>
using namespace std;
float sum (int a, int b){
	return a+b;
}
float sum (float a, int b){
	return a+b;
}
int main(){
	cout << "The sum of 3 and 6 is " << sum ((float)3,6) <<endl;
	cout << "The sum of 3.2 and 6 is " << sum ((float)3.2,6) <<endl;
	return 0;
}
