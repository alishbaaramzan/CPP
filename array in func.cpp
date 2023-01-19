#include<iostream>
using namespace std;

void func(int*ar){
	int n = sizeof(ar);
	for(int i = 0; i < n; i++){
		cout << ar[i] << endl;
}
}
int main(){
	int* arr = new int[5];
	for(int i =0 ; i < 5; i++)
		cin >> arr[i];
	func(arr);
	return 0;
}
