#include<iostream>
using namespace std;
int palindrome(int);
int main(){
	int num;
	cout << "Enter a number: ";
	cin >> num;
	int reversed = palindrome(num);
	cout << "reversed number is " << reversed << endl;
}

int palindrome(int x){
	static int i = 1;
	if(x==0)
		return 0;
	int n = x % 10;
	return n * i + palindrome(x/10);
	i*=10;
}
