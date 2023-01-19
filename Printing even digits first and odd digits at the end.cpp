#include<iostream>
using namespace std;

int main(){
	int arr[15];
	int temp = 0;
	int values = 1;
	int a=0,b=14;
	while(values<=15){
		cout << "Enter value " << values << ": ";
		cin >> temp;
		if(temp%2==0){
			arr[a]=temp;
			a++;
		}
		else{
			arr[b]=temp;
			b--;
		}
		values++;
	}
	cout << "The entered values are: " << endl;
	for(int i = 0; i < 15; i++){
		cout << arr[i] << " ";
	}
	return 0;
}
