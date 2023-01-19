#include<iostream>
using namespace std;

int main(){
	int arr1[50][50] = {0};
	int arr2[50][50] = {0};
	int product[50][50] ;
	int r1,r2,c1,c2;
	cout << "Enter rows for\nMatrix 1: ";
	cin >> r1;
	cout  << "\nMatrix 2: ";
	cin >> r2;
	cout << "Enter columns for\nMatrix 1: ";
	cin >> c1;
	cout  << "\nMatrix 2: ";
	cin >> c2;
	cout << "Enter elements for matrix 1: " << endl;
	if(c1==r2){
	for(int i = 0 ; i < r1; i++){
		for(int j = 0 ; j < c1; j++){
			cin >> arr1[i][j];
		}
	}
	cout << "Enter elements for matrix 2: " << endl;
	for(int i = 0 ; i < r2; i++){
		for(int j = 0 ; j < c2; j++){
			cin >> arr2[i][j];
	}
}

	cout << "Result after multiplication is: " << endl;
		for(int i = 0; i<r1; i++){
			for(int j =0; j<c2; j++){
				product[i][j]={0};
				for(int k=0; k < c1 ; k++){
					product[i][j] += arr1[i][k]*arr2[k][j]; 
					
				}
				cout <<product[i][j] << " ";
			}
			cout << endl;
		}
}
	else
		cout << "Invalid rows and columns " << endl;
		return 0;
}
