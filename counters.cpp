#include<iostream>
using namespace std;
int zero_counter(int []);
int even_counter(int []);
int odd_counter(int []);
int main(){
	int arr[10];
	cout << "Enter ten numbers: ";
	for(int i = 0; i < 10; i++){
		cin >> arr[i];
	}
	cout << "The number of even digits is " << even_counter(arr) << endl;
	cout << "The number of odd digits is " << odd_counter(arr) << endl;
	cout << "The number of zeroes is " << zero_counter(arr) << endl;
	return 0;
}

int zero_counter(int z[10]){
	int count;
	for(int i = 0; i < 10; i++){
		if(z[i]==0)
			count++;
	}
	return count;
}
int odd_counter(int o[10]){
	int count;
	for(int i = 0; i < 10; i++){
		if(o[i]%2!=0)
			count++;
	}
	return count;
}
int even_counter(int e[10]){
	int count;
	for(int i = 0; i < 10; i++){
		if(e[i]%2==0)
			count++;
	}
	return count;
}
