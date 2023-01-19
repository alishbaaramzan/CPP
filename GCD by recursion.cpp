#include<iostream>
using namespace std;
int num1;
int GCD(int x, int y){
	if(y%x==0 && num1%x==0)
		return x;
	GCD(x-1, y);
}
int main(){
	int  num2;
	cin >> num1 >> num2;
	cout << "GCD is " << GCD(num1,num2);
	return 0;
	
}
