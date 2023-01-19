#include <iostream>
using namespace std;

int main(){
	int product = 1;
	for(int i=1; i <=4; i++){
		cout << "1";
		for(int j =1; j<=i; j++){
			cout << " x " << j;
		} 
		product*=i;
		cout << " = " <<product <<endl;
	}
	return 0 ;
}
