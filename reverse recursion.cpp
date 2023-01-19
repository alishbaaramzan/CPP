#include<iostream>
using namespace std;

int reverse(int num1,int num2, int i){
	if(num1==0)
		return 0;
	num2 = num1%10;
	reverse(num1/10, num2, i);
		 num2*=i;
		 i*=10;
		 cout << i << endl;
		 return num2;
		
		
}
int main(){
	int x;
	cin >> x;
	int reversed_num = reverse(x,0,1);
	if(reversed_num==x)
		cout << x << " is a palindrome " << endl;
	else
		cout << x << " is not a palindrome " << endl;
	return 0;
	
}
