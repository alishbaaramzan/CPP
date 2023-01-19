#include<iostream>
using namespace std;
int sum(int,int);
int difference(int,int);
int product(int,int);
int division(int,int);
int remainder(int,int);
int main(){
	int num1,num2;
	cout << "Enter two numbers: ";
	cin >> num1 >>num2;
	char option;
	cout << "Choose an operation(+,-,*,/,%) ";
	cin >> option;
	switch(option){
		case '+':
			cout << sum(num1,num2);
			break;
		case '-':
			cout << difference(num1,num2);
			break;
		case '*':
			cout << product(num1,num2);
			break;
		case '/':
			cout << division(num1,num2);
			break;
		case '%':
			cout << remainder(num1,num2);
			break;
	}
}

int sum(int a, int b){
	for(int i = 1; i <=b; i++){
		++a;
	}
	return a;
}
int difference(int a, int b){
	if(a>b){
		for(int i = 1; i<=b; i++){
			--a;
		}
		return a;
	}
	else
	for(int i = 1; i<=a; i++){
			--b;
    }
    	return b;
}

int product(int a, int b){ 
	int x = a;
	for(int i = 1; i <= x*(b-1); i++){
		++a;
	}
	return a;
}

int division(int a, int b){
	if(a==b)
		return 1;
	else if(a<b)
		return 0;
	else if(a>b){
		int count = 1;
		int n = b;
		while(b<=a){
			for(int i = 1; i <=n; i++){
				++b;
			}
			count++;
		}
		return count-1;
	}
	
}

int remainder(int a, int b){
	if(a==b)
		return 0;
	else if(a<b)
		return a;
	else if(a>b){
		int margin;
		int n = b;
		while(b<=a){
		    margin = b;
			for(int i = 1; i <=n; i++){
				++b;
			}
		}
		for(int i =1; i <=margin; i++){
			--a;
		}
		return a;
	}
	
}

