#include<iostream>
using namespace std;

int main(){
	int k, i;
	int arr1[] = {1,2,3,4,5};
	int arr2[]= {6,7,8,9,10};
	int merge[10];
	for(int i = 0 ; i < 5; i++){
		merge[i]=arr1[i];
	}
	k = i;
	for(int i = 0 ; i < 5; i++){
		merge[k]=arr2[i];
		k++;
	}
	for(int i =0; i < 10; i++){
		cout << merge[i] << endl;
	}
	return 0;
}
