#include<iostream>
using namespace std;
int largest(int array[],int size){
	static int i = array[0];
	static int counter=1;
	if(counter==size)
		return i;
	if(array[counter]>i){
		i = array[counter];
	}
	counter++;
	largest(array,size);
	
}
int main(){
	int arr[20];
	int size;
	cout << "Enter size of array: ";
	cin >> size;
	cout << "Enter elements of array: ";
	for(int i = 0; i < size ; i++){
		cin >> arr[i];
	}
	cout << "Largest number in array is " << largest(arr,size);
	return 0;
	
}
