#include<iostream>
using namespace std;

int main(){
	int diameter, x;
	cin >> diameter;
	x = diameter/2;
	for(int i=1; i<=x; i++){
		for(int j=x; j>i; j--)
			cout << ".";
		for(int j=1; j<=2*i+1 ; j++)
			cout << "*";
		for(int j=x; j>i; j--)
			cout << ".";
		cout << endl;			
}
	for(int i=1; i <=diameter; i++)
		cout << "*";
		cout << endl;
	for(int i=x; i>=1; i--){
		for(int j=i;j<x; j++)
			cout << ".";
		for(int j=1; j<=2*i+1; j++)	
			cout << "*";
		for(int j=i;j<x; j++)
			cout << ".";
		cout << endl;	
	}	
	return 0;
}
