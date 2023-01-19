#include<iostream>
using namespace std;

int main(){
	int sum = 0;
	for(int i =1; i <=5; i++){
		cout << "1";
		for(int j =2; j<=i; j++){
			cout << " + " <<j;
		}
		sum+=i;
		cout << " = " <<sum <<endl;
	}
	return 0;
}
