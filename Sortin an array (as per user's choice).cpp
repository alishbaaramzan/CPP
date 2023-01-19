#include<iostream>
using namespace std;

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
		int temp=0;
		for(int i = 0; i < 10 ; i++){
			for(int j = 0; j < 10; j++){
				if (arr[i]<arr[j]){
					temp=arr[j];
					arr[j] = arr[i];
					arr[i] = temp;
				}
				cout << "i value is " <<arr[i] <<" j value is  " << arr[j] << endl;
			}
		}
		for(int i = 0; i < 10; i++){
			cout << arr[i] << " ";
		}
		}
	else if(choice=='d'){
			int temp=0;
		for(int i = 0; i < 10 ; i++){
			for(int j = 0; j < 10; j++){
				if (arr[i]>arr[j]){
					temp=arr[j];
					arr[j] = arr[i];
					arr[i] = temp;
				}
			}
		}
		for(int i = 0; i < 10; i++){
			cout << arr[i] << " ";
		}
		}
	return 0;
}
		

