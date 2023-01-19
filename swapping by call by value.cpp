#include<iostream>
using namespace std;
void swap(int a, int b){
	int temp = a;
	a = b;
	b = temp;
	cout << "Swapped variables are: " << a << " and " << b << endl;
}
int main(){
	int var1;
	int var2;
	cout << "Enter two variables: ";
	cin >> var1;
	cin >> var2;
	swap(var1, var2);
	return 0;
	
}
