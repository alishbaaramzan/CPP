#include<iostream>
using namespace std;

int main(){
	float num;
	cin >> num; 
	if(num==(int)num){
		cout << (int)num%100 <<endl;
	}
	else{
		while(num!=int(num)){
			num= num * 10; 
		}
		cout << (int)num %100 << endl;
	}
	return 0;
}
