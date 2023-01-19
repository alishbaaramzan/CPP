#include<iostream>
using namespace std;

int main(){
	int k = 0;
	int X[3] = {1,3,5};
	int Y[3] = {2,4,6};
	int Z[6];
	for(int i = 0; i < 3; i++){
		Z[k]=X[i];
		if(Z[k] < Z[k-1]){
			int temp = 0;
			for(int j = k ; j > 0; j--){
				temp = Z[j];
				Z[j] = Z[j-1];
				Z[j-1] = temp;
			}
		}
		k++;
	}
	for(int i = 0; i < 3; i++){
		Z[k]=Y[i];
		if(Z[k] < Z[k-1]){
			int temp = 0;
			for(int j = k ; j > 0; j--){
				temp = Z[j];
				Z[j] = Z[j-1];
				Z[j-1] = temp;
			}
		}
		k++;
	}
	for(int i = 0; i < k ; i++){
		cout << Z[i] <<" ";
	}
	return 0;
}
