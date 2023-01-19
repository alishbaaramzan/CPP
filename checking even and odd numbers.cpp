#include<iostream>
using namespace std;

int main(){
	int num[20];
	int counteven, countzero = 0;
	int countodd = 0;
	for( int i = 0; i <20 ; i++){ 
		cout << "Enter  number " <<" :";
		cin >> num[i];
		if(num[i] % 2 ==0){
			counteven++;
			if(num[i]==0){
				countzero++;
			}
		}
		else if (num[i]%2!=0){
			countodd++;
		}
	}
	cout << "You entered " << counteven << " even numbers";
	cout << " out of which " << countzero << " were zero" <<endl;
	cout << "You entered " << countodd << " odd numbers" <<endl;
	return 0;
}
	
