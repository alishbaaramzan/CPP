#include<iostream>
using namespace std;

int main(){
	float a;
	cin >>  a;
	int b = a;
	int reverse_num = 0;
	while(a!=0){
		reverse_num = reverse_num * 10 + a%10;
		a/=10;
	}
	cout << reverse_num;
	return 0;
	
	
}
