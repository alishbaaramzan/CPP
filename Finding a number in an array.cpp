#include<iostream>
using namespace std;

int main(){
	int num;
	int check = 0;
	int arr[10];
	cout << "Enter 10 numbers: ";
	for(int i = 0; i < 10; i++){
		cin >> arr[i];
	}
	cout << "Enter a number to be found in array: ";
	cin >> num;
	for(int i = 0; i < 10; i++){
		if(arr[i]==num){
			cout << arr[i] << " is present at index " << i << endl;
			check++;
		}
	}
	if(check==0)
		cout << "Number not found " << endl;
		return 0;
	
}
