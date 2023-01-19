#include<iostream>
using namespace std;

int main(){
	int arr[6]={34, -50, 42, 14, -5, 86};
	int max_sum = 0;
	int sum;
	for(int i = 0; i < 6; i++){
		int n = i;
		while(n<6){
			sum = 0;
			for(int j = i; j <= n; j++){
				sum+=arr[j];
			}
			if(sum>max_sum) max_sum = sum;
			n++;
		}		
	}
	cout << "Maximum sum is " << max_sum << endl;
	return 0;
}
