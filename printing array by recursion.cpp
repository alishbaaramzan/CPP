#include<iostream>
using namespace std;
void print_array(int array[], int size, int i){
	if(i==size){
		cout << endl;
		return;
	}
	cout << array[i] << " ";
	i++;
	print_array(array,size, i);
}
int main(){
	int arr[5];
	for(int i = 0 ; i <=4; i++){
		cin >> arr[i];
	}
	print_array(arr,5, 0);
	return 0 ;
}


