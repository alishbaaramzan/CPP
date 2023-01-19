#include<iostream>
using namespace std;

int max_value(int array[][2]);
int main(){
	int arr[3][2];
	int max;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 2; j++){
			cout << "Enter the element " << j+1 << " of row " << i+1 << ": ";
			cin >> arr[i][j];
		}
	}
	max= max_value(arr);
	cout << "The maximum value in the array is " << max << endl;
	return 0;
}
int max_value(int array[][2]){
	array[3][2];
	int mv = array[0][0];
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 2; j++){
			if(array[i][j]>array[0][0])
				mv = array[i][j];
		}
	}
	return mv;
}
