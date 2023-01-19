#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=i; j++){
			cout << "*";
		}
		for(int j=i; j<n; j++){
			if(j%2==1){
				cout << "_";
			}
		    if(j%2==0){
				cout << ".";
			}
		}
		cout << endl;
	}
	for(int i=1; i<=n-1; i++){
		for(int j=i; j<=n-1; j++){
			cout << "*";
		}
		for(int j=i; j>=1; j--){
			if(j%2==1){
				cout << "_";
			}
			if(j%2==0){
				cout << ".";
			}
		}
		cout << endl;
	}
	return 0;
}
