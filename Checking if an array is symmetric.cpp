#include<iostream>
using namespace std;

int main(){
	int check=0;
	int num,n;
	cout << "What is the size of array: ";
	cin >> num;
	n= num;
	int arr[n];
	cout << "Enter " << num << " elements:" << endl;
	for(int i = 0; i < num; i++){
		cin >> arr[i];
	}
	for(int i = 0; i < (num/2); i++){
		if(arr[i]==arr[n-1]){
			check++;
			n--;
		}
	}

	if(check==num/2)
		cout << "Array is symmetric " << endl;
	else
		cout << "Array is not symmetric " << endl;
	return 0;
}
