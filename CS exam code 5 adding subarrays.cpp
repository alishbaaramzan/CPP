#include<iostream>
using namespace std;

int main(){
	int x,y;
	cin >> x >> y;
	int arr[x][y];
	int maxsum = 0;
	for(int i = 0; i < x; i++){
		int sum = 0;
		for(int j = 0; j < y; j++){
			cin >> arr[x][y];
			sum +=arr[x][y]; 
		}
		if(sum>maxsum)
			maxsum = sum;
	}
	cout << "Maximum sum is " << maxsum << endl;
	return 0;
}
