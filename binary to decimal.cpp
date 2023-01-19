#include<iostream>
using namespace std;

int main(){
		int binary;
		int dec = 0;
		cin >> binary;
		int i = 1;
		while(binary!=0){
			int n = binary%10;
			dec+= n*i;
			i*=2;
			binary/=10;
			}
		cout << "Binary converted to decimal is " << dec <<endl;
	
	return 0;
}
