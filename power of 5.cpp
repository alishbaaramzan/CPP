#include<iostream>
using namespace std;

int main(){
	int num;
	int x =0;
	cout << "Enter a number: ";
	cin >> num;
	do{
		x= num/5;
	} while(x>1);
	if(x==1){
		cout << "yes" <<endl;
	}
	else{
		cout << "no";
	}
	return 0;
}
