#include<iostream>
#include<string>
using namespace std;

int main(){
	string check = "Alishba";
	int size = check.length();
	cout << size << endl;
	for(int i = 0 ; i < 7; i++){
		cout << check[i] << " ";
	}
	return 0;	
}


