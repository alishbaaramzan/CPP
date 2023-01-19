#include<iostream>
using namespace std;

float mean(int [], int);
float median(int [], int);
int calc_mode(int [], int);
int main(){
	int numVal;
	cin >> numVal;
	int arr[numVal];
	for(int i = 0; i < numVal; i++){
		cin >> arr[i];
	}
	float meanv = mean(arr,numVal);
	float medianv = median(arr,numVal);
	int mode = calc_mode(arr,numVal);
	
	cout << "Mean value is: " << meanv << endl;
	cout << "Median is " << medianv << endl;
	if(mode!=0){
		cout << "Mode value is: " << mode << endl;
	}
	else
		cout << "There is no mode" << endl;
	return 0;
}
float mean(int a[], int n){
	float sum = 0;
	for(int i = 0; i< n; i++){
		sum+=a[i];
		}
	return (sum/n);
}
float median(int a[], int n){
	for(int i = 0; i <n; i++){
		for(int j = 0; j < n; j++){
			int temp = 0;
			if(a[i]<a[j]){
				temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}
		}
	}
	for(int i = 0; i <n; i++){
		cout << a[i] << " ";
	}
	int x = n/2;
	int y = n/2- 1;
	if(n%2==1){
		return a[x];
	}
	else if(n%2==0){
		float med = (float)(a[x]+a[y]);
		return med/2;
	}
}
int calc_mode(int a[], int n){
	int maxCount = 0;
	int count = 0;
	int m = 0;
	for(int i = 0; i < n; i++){
		count = 0;
		for(int j = 0; j < n; j++){
			if(a[i]==a[j])
				count++;
		}
		if(count>maxCount){
			maxCount = count;
			m = a[i];
		}
	}
	if(maxCount>1){
		return m;
	}
	else 
		return 0;
	
	
}
