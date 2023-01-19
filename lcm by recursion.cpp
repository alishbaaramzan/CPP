#include<iostream>
using namespace std;

int calc_lcm(int a, int b, int i){
	if(i%a==0 && i%b==0){
		return i;
	}
	return calc_lcm(a,b,i+1);
}
int main(){
	int num1, num2;
	cin >> num1 >> num2;
	int lcm = calc_lcm(num1,num2,1);
	cout << "LCM is " << lcm << endl;
	return 0;
}


