#include<iostream>
using namespace std;

void swap(int &, int &);
int main(){
	int a = 4;
	int b = 7;
	swap(a,b);
	cout << a << " " << b <<endl;
	return 0;
}
void swap(int &x, int &y){
	int temp = x;
	x=y;
	y=temp;
	
}
