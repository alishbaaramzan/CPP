#include<iostream>
using namespace std;

int main(){
	int s;
	cout << "Enter the size for the array: ";
	cin >> s;
	int arr[s];
	cout << "Enter the elements of the array in random order: " << endl;
	for(int i = 0; i <s; i++){
		cin >> arr[i]; 
	}
	for(int i = 0; i < s; i++){
		for(int j = 0; j < s-1; j++){
			if(arr[j]>arr[j+1]){
				int temp = arr[j];
				arr[j]= arr[j+1];
				arr[j+1]= temp;
			}
		}
	}
	cout << "The sorted array is: " << endl;
	for(int i = 0; i <s; i++){
		cout << arr[i]; 
	}
	return 0; }

