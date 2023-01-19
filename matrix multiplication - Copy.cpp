#include<iostream>
using namespace std;

int main(){
	int arr1[10][10] = {0};
	int arr2[10][10] = {0};
	int product[10][10] ;
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
		for(int j = 0; j<r1; j++){
			for(int k =0; k<c2; k++){
				product[j][k]={0};
				for(int l=0; l<r2 ; l++){
					product[j][k] += arr1[j][l]*arr2[l][k]; 
					
				}
				cout <<product[j][k] << " ";
			}
			cout << endl;
		}
}
	else
		cout << "Invalid rows and columns " << endl;
		return 0;
}
