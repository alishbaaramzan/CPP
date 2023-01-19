#include<iostream>
using namespace std;
int buses();
int main(){
	int test;
	cin >> test;
	for(int i = 1; i <= test; i++){
		cout << "case# " << i << ": "  << buses();
	}
	return 0;
}
int buses(){
	int N, P, P1, P2;
	cin >> N;
	int arr[N][2];
	for(int i = 0; i < N ; i++){
		for(int  j = 0; j < 2; j++){
			cin >> arr[i][j];
		}
	}
	cin >> P ;
	int cities[P];
	for(int i = 0; i < P ; i++){
		cin >> cities[i];
	}
	int count[P]={0};
	for(int i = 0; i < N; i++){
		int j = 0;
		for(int k = 0; k < P; k++){
		if(cities[k]>=arr[i][j] && cities[k]<=arr[i][j+1]){
			count[k]++;
		}
	}
	}
	for(int i = 0 ; i < P; i++){
		cout << count[i] <<" ";
	}
	
}
