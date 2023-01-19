#include<iostream>
using namespace std;

float pow(float x, int p){
	if(p){
		return x* pow(x,p-1);
	}
	return 1;
}
int main(){
	float n;
	cin >> n;
	float powerOfx = pow(n,7);
	cout << "x^7 is: " << powerOfx << endl;
	return 0;
}
