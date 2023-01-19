#include<iostream>
using namespace std;
int pow(int, int);
int main(){
	int x,y;
	cout << " Enter two numbers: ";
	cin >>x >>y;
	int value = pow(x,y);
	cout << "The value of " << x <<" to the power " << y << " is " << value << endl;
	return 0;
}

int pow(int a, int b){
	static int i = 1;
	if(i==b)
		return a;
	i++;
	return a * pow(a,b);
}
