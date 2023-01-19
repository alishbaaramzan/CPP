#include<iostream>
using namespace std;

int main(){
	int n,num;
	cout << "How many numbers you wish to enter: ";
	cin >> n;
	int arr[n];
	cout << "Enter the numbers: ";
	for(int i = 0 ; i < n ; i++){
		cin >> arr[i];
	}
	cout << "Enter a target number: ";
	cin >> num;
	for(int i = 0; i < n; i++){
		for(int j = i+1; j < n; j++){
			if(arr[i]+arr[j]==num){
				cout << i << " and " << j << endl;
			}
		}
	}
	return 0;
}
