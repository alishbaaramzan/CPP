#include<iostream>
using namespace std;

int main(){
	string* name = new string[3];
	int* age = new int[3];
	for(int i = 0; i < 3; i++){
		cout << "Enter name " << i+1 << ": ";
		cin >> *(name+i);
		cout << "Enter age " << i+1 << ": ";
		cin >> *(age+i);
	}
	for(int i = 0; i < 3; i++){
		cout << *(name+i) << " " << *(age+i) << endl;
	}
	delete [] name;
	delete [] age;
	name = 	NULL;
	age = NULL;
	return 0;
}
