#include<iostream>
using namespace std;

int fibonacci(int n){
	if(n==1 || n==0){
		return n;
	}
	return fibonacci(n-1) + fibonacci(n-2);
}
int main(){
	/*int a = 0, b = 1;
	int n;
	cin >>n;
	cout << b << " ";
	while(n>1){
		cout << a+b << " ";
		int temp = a;
		a = b;
		b = temp + b;
		n--; 
	}
	return 0;*/
	int n;
	cin >> n;
	for(int i = 1; i <=n ; i++){
		cout << fibonacci(i) << " ";
	}
	return 0;
}
