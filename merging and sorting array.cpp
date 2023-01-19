#include<iostream>
using namespace std;

int main(){
	int arr1[50];
	int arr2[50];
	int merge[100];
	int size1, size2;
	int i, k = 0;
	cout << "Enter size for array 1: ";
	cin >> size1;
	cout << "Enter elements for array 1: ";
	for( i = 0; i<size1; i++){
		cin >> arr1[i];
		merge[i]=arr1[i];	
	}
	k=i;
	cout << "Enter size for array 2: ";
	cin >> size2;
	cout << "Enter elements for array 2: ";
	for(i= 0; i<size2; i++){
		cin >> arr2[i];
		merge[k]= arr2[i];
		k++;
	}
	int temp=0;
	for(i=k-1; i>0; i--){
		for(int j=k-2; j>=0; j--){
			if(merge[j]<merge[j+1]){
				temp = merge[j];
				merge[j]=merge[j+1];
				merge[j+1]=temp;
			}
			
		}
	}
	cout << "Elements of merged and then sorted array are: " << endl;
	cout << "{ ";
	for(int i = 0; i < k ; i++){
		cout << merge[i] <<" ";
	}
	cout << " }";
	return 0;
}
