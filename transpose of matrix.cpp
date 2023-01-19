#include<iostream>
using namespace std;

int main(){
	int matrix[50][50];
	int sum[50][50] = {0};
	int r, c;
	cin >> r >> c;
	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			cin >> matrix[i][j];
		}
	}
	cout << "The transpose of the matrix is: "<< endl;
	for(int i = 0; i < c; i++){
		for(int j = 0; j < r; j++){
			cout << matrix[j][i];
		}
		cout << endl;
	}
	if(r==c){
	cout << "Sum of the matrix and its transpose is: " << endl;
	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			sum[i][j]= matrix[i][j] + matrix[j][i];
			cout << sum[i][j];
		}
		
		cout << endl;
	}
	int check = 0;
	for(int i = 0; i<r; i++){
		for(int j = 0; j < c; j++){
			if(i!=j && matrix[i][j]==0)
				check++;
			if(i=j && matrix[i][j] ==1)
				check++;

		}		
	}
	if(check==r*c){
		cout << "Entered matrix is an identity matrix" << endl;
}
	else{
		cout << "Entered matrix is not an identity matrix" << endl;
	}
	}
	else
		cout << "Matrix is not identity ans matrix and its transpose can not be added" << endl;
	return 0;
	
}
