#include<iostream>
using namespace std;
int reverse(int &);
int main(){
	int num;
	cout << "Enter a number: ";
	cin >> num;
    int x = reverse(num);
    cout << "Reversed number is " << x << endl;
    cout << "number itslef now is " << num << endl;
    return 0;
	 
}

int reverse(int &a){
	int rev = 0;
	while(a!=0){
		rev= rev*10 + a%10;
		a/=10;
	}
	return rev;
	
}
