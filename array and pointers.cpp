#include<iostream>
using namespace std;

int main(){
	int arr[5];
	int* pointer = &arr[0];
	cout << "Adresses of elements using pointers are: ";
	for(int i = 0; i< 5; i++){
		cout << pointer + i << endl;
	}
	cout << "Adresses of the elements using & with array are: ";
	for(int i = 0; i < 5; i++){
		cout << &arr[i] << endl;
	}
	return 0;
}

