#include <iostream>
using namespace std;

int main(){
	int num;
	cout << "Enter a number:";
	cin >> num;
	int counter = 0;
	for(int i =1; i<=num; i++){
		if(num%i==0){
			for(int j =1; j<=i; j++){
				if(i%j==0){
					counter++;
				}
			}
			
			if(counter==2){
				cout << i <<endl;
			}	
			
			
		}
	}
	return 0;
}
