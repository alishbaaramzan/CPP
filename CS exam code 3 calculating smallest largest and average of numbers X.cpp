#include<iostream>
using namespace std;

int main(){
	int X;
	cin >> X;
	int sum;
	int* numbers = new int[X];
	for(int i = 0; i < X; i++){
		cin >> *(numbers+i);
		sum += *(numbers+i);
	}
	int min = *(numbers+0);
	int max = *(numbers+0);
	for(int i = 0; i < X; i++){
		if(*(numbers+i) > max)
			max = *(numbers+i);
		if(*(numbers+i) < min)
		    min = *(numbers+i);
	}
	cout << "Largest is " << max << endl;
	cout << "Smallest is " << min << endl;
	cout << "Average is " << (float)sum/X << endl;
	delete [] numbers;
	numbers = NULL;
	return 0;
}
