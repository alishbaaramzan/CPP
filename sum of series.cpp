#include<iostream>
using namespace std;
int sum_series(int x);
int main(){
	int num;
	cout << "Enter a number: ";
	cin >> num;
	float result = sum_series(num);
	cout << "Sum of the series is " << result << endl;
}

int sum_series(int x){
	int n = 1;
	float sum = 0;
	while(n<=16){
		float r[2]={0};
		for(int i = 0; i < 2; i++){
			int fact = 1, pow=1;
			for(int j = 2; j <= n; j++){
				fact*=j;
			}
			for(int j = 1; j <=n; j++){
				pow*=x;
			}
			r[i] = (float) pow/fact;
			n++;
		}
		sum+= r[0] - r[1];
	}
	return sum;
}
