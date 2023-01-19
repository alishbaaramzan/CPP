#include <iostream>
using namespace std;

int main(){
	for(int i =11; i<=25 ; i++ ){
		if(i%2!=0){
			int counter = 0;
			for(int j = 1; j <= i; j++){
				if(i%j==0){
					counter++;
				}
			}
			if(counter >2){
				cout << i << " is composite" <<endl;
			}
			else{
				cout << i << " is prime"<<endl;
			}
		}
	}
	return 0;
}
