#include<iostream>
using namespace std;

void absolute (int);
void absolute (float);
int main(){
	int neg_integer;
	float neg_float;
	cout << "Enter a negative integer: ";
	cin >> neg_integer;
	cout << "Enter a negative floating number: ";
	cin >> neg_float;
	absolute(neg_integer);
	absolute(neg_float);
	return 0;
	
}
void absolute (int x){
	cout << "Absolute value of integer is " <<  x * -1 << endl;
}
void absolute (float x){
	cout << "Absolute value of floating number is " << x * -1 << endl;
}
