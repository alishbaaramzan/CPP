#include<iostream>
using namespace std;
int maxValue(int array[], int size){
	int a = array[0];
	for(int i=1; i<size; i++){
		if(array[i]>a)
			a=array[i];
	}
	return a;
}
int pow_func(int x, int n){
	int a = 1;
	for(int i=1; i<=n; i++){
		a*=x;
	}
	return a;
}
int main(){
	int var, power;
	cout << "x: ";
	cin >> var;
	cout << "n: ";
	cin >> power;
	int arr[var+1];
	for(int i = 0; i <=var; i++){
		arr[i] = pow_func(i,power) - pow_func(i, (power-1));
	}
	int max = maxValue(arr, var+1);
	int y_axis = max;
	for(int i =0; i<max; i++ ){
		for(int j = var; j>0; j--){
			if(j==var){
				cout << "0" << y_axis << " " ;
			}
			if(max-i == arr[j])  
				cout << " .";
			else
				cout << "  ";
		}
		for(int j = 0; j<= var; j++){
			if(max-i == arr[j])  
				cout << " .";
			else
				cout << "  ";
		}
		y_axis--;
		cout << endl;
	}
	
	return 0;
}
