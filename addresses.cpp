#include<iostream>
using namespace std;
int asending(int []);
//int descending(int []);
int main(){
	int arr[10];
	char choice;
	cout << "Enter ten values: ";
	for(int i = 0; i < 10; i++){
		cin >> arr[i];
	}
	cout << "For sorting in ascending order, enter 'a'\nFor sorting in descending order, enter 'd':" << endl;
	cin >> choice;
	if(choice=='a'){
		int asc_array=ascending(arr);
	}
	for(int i = 0; i < 10; i++){
		cout << asc_array[i] << " ";
	}
	return 0;	
		
}
int ascending(int a[10]){
	for(int i = 0; i < 10; i++){
		for(int j = i+1; j <10 ; j++){
			int temp = 0;
			if(a[j]>a[j+1]){
				temp = a[j];
				a[j]=a[j+1];
				a[j+1]=	temp;
			}
		}
	}
	return a;
}
