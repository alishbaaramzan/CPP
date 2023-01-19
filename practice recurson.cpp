#include<iostream>
using namespace std;
int fibonacci(int n){
	if(n==0 || n==1)
		return n;
	else 
		return fibonacci(n-1) + fibonacci(n-2);
}
int fact(int x){
	if(x==1)
		return x;
	return x * fact(x-1);
}
int power(int n, int p){
	if(p==0)
		return 1;
	return n * power(n,p-1);
}
int reverse(int num1, int num2){
	if(num1==0)
		return num2;
	num2*=10;
	num2+=num1%10;
	return reverse(num1/10, num2);
}
int prime(int x){
	static int num = x;
	static int i = 0;
	if(x==0)
		return i;
	if(num%x==0)
		i++;
	prime(x-1);
}
int func(int x){
	if(x==0 || x==1)
		return x;
	return func(x-2);
}
int main(){
	int x,y, num, pow, num_for_rev,p, e_o;
	cout << "Enter range for fibonacci: ";
	cin >> x;
	for(int i = 0; i < x; i++){
		cout << fibonacci(i) << " ";
	}
	cout << endl;
	cout << "Enter factorial number: ";
	cin >> y;
	cout << "Factorial is " << fact(y) << endl; 
	cout << "Enter number: ";
	cin >> num;
	cout << "Enter power for that number: ";
	cin >> pow;
	cout << "Number raised to the power is " << power(num,pow) << endl;
	cout << "Enter a number to be reversed: ";
	cin >> num_for_rev;
	cout << "Reversed number is " << reverse(num_for_rev,0) << endl;
	cout << "Enter a number: ";
	cin >> p;
	int check = prime(p);
	if(check==2)
		cout << p << " is a prime number "<< endl;
	cout << "Enter a number to be checked as even or odd: ";
	cin >> e_o;
	int c = func(e_o);
	if(c==0)
		cout << "Even " << endl;
	else
		cout << "Odd " << endl;
		
	return 0;
	
	
}
