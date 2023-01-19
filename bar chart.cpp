#include<iostream>
using namespace std;
int maxValue(int arr[5]){
	int a = arr[0];
	for(int i =1; i<5; i++){
		if(arr[i]>a)
			a=arr[i];
	}
	return a;
}
int main(){
	int values[5];
	cout << "Enter five values: ";
	for(int i=0; i<5; i++){
		cin >> values[i];
	}
	int n = maxValue(values);
	int y_axis=n;
	for(int i=1; i<=n; i++){
		for(int j = 0; j<5; j++){
			if(j==0){
				if(y_axis>=10)
				cout << y_axis <<" ";
				else
					cout << "0" <<y_axis << " ";
			}
			if(i>(n-values[j]) )
				cout << "* ";
			else
				cout << "  ";
		}
		y_axis--;
		cout << endl;
	}
	cout << "   ";
	for(int i =1; i<=5; i++){
		cout << i << " ";
	}
	return 0;
}
