#include<iostream>
using namespace std;
int perf_square(int);
int main(){
	int max;
	int count = 0;
	cout << "Enter a number: ";
	cin >> max;
	for(int i = 3 ; i <= max; i++){
		for(int j = 3; j <= max; j++){
			int x, y = 0;
			 x = (i*i) + (j*j);
			 y = perf_square(x);
			if(y && y<=max){
				cout << i << " " << j << " " << y << endl;
				count++;
			}
		}
	}
	cout << "A total of " << count << " Pythagorean triples were found in the range " << max << endl;
	return 0;
}


int perf_square(int a){
	for(int k = 2; k <= a; k++){
		if(k*k==a)
			return k;
	}
	
}
