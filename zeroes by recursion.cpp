#include<iostream>
using namespace std;
int zero(int a[10], int n){
	if(n==-1)
		return 0;
	if(a[n]==0)
		return 1 + zero(a, n-1);
	else
		return 0 + zero(a,n-1);
}
int main(){
	int arr[10];
	cout << "Enter ten digits: ";
	for(int i = 0; i < 10; i++){
		cin >> arr[i];
	}
	cout << "The number of zeroes entered are " << zero(arr,10) << endl;
	return 0;
	
}
