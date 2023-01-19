#include<iostream>
#include<cstdlib>
using namespace std;

void Fun(int a[], int size){
	int temp;
	for(int iter = size - 1; iter > 0; iter --){
		for(int j = size - 2; j >=0; j--){
			if( a[j] < a[j+1]){
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}
int main(){
	int b[11]= {1,4,2,6,5,8,7,10,9,11,3};
	Fun(b,11);
	for(int i = 0; i < 11; i++){
		cout << " " << b[i];
	}
	return 0; 
}
