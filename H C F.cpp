#include<iostream>
using namespace std;

int main(){
	int a =5;
	int b =50;
	int hcf=0;
	for(int i =1 ; i<=5; i++){
		if(a%i==0 && b%i==0){
			hcf=i;
		}
	}
	cout << "HCF is " << hcf <<endl;
}
