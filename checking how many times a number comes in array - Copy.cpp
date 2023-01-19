#include<iostream>
using namespace std;

int main(){
	int arr[10];
	int check = 0;
	int n;
	for(int i = 0; i < 10; i++){
		cin >>arr[i];
	}
	cout << "Enter the target number: ";
	cin >> n;
	for(int i = 0; i < 10; i++){
		if(arr[i]==n){
			check++;
		}
	}
	cout << "The number " << n << " appeared " << check << " times in the array " << endl;
	return 0;
}
