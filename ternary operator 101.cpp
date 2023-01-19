#include <iostream>
using namespace std;

int main(){
	int num1, num2, num3;
	cin >> num1 >>num2 >>num3;
	int max = (num1 > num2 && num1 > num3)? num1 :break;
	cout << max <<endl;
	return 0;
}
