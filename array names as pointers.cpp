#include<iostream>
using namespace std;

int main(){
	int arr[5];
	cout << "Enter five values: ";
	for(int i = 0 ; i < 5; i++){
		cin >> *(arr + i);
	}
	int sum = 0;
	for(int i = 0; i < 5; i++){
		sum += *(arr + i);
	}
	cout << "The sum of all the values is : " << sum << endl;
	return 0;
}
