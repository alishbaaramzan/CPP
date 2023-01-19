#include <iostream>
using namespace std;

int main(){
	int decimal;
	int binary,remainder = 0;
	cin >> decimal;
	while(decimal/2!=0){
		decimal = decimal/2; cout << "decimal is " <<decimal <<endl;
		remainder = decimal%2; cout << "reamainder is " << remainder <<endl;
		binary = 10 * remainder + remainder; cout << binary <<endl;
		
		
	}
	cout << binary <<endl;
	return 0;
}
