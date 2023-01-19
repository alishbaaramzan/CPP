#include <iostream>
#include <conio.h>
#include<cmath>
using namespace std;
int max(int, int, int);
int min(int, int, int);
int main(){
	int a, b, c;
	cout << "Enter three numbers: ";
	cin >>a >>b >>c;
	cout << "Maximum number is " << max(a,b,c) <<endl;
	cout << "Minimum number is " << min(a,b,c) <<endl;
	return 0;
	
}



int max(int x, int y, int z){
	if(x>y && x >z)
		return x;
	else if(y>x && y>z)
		return y;
	else
		return z;
}
int min(int x, int y, int z){
	if(x<y && x <z)
		return x;
	else if (y <x && y < z)
		return y;
	else
		return z;
}
