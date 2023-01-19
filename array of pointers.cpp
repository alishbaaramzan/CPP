#include<iostream>
using namespace std;

int main(){
	char name1[20];
	char name2[20];
	char name3[20];
	char* names[3];
	int* age = new int[3];
	names[0]=name1;
	names[1]=name2;
	names[2]=name3;
	for(int i = 0; i < 3; i++){
		cout << "Enter your name: ";
		cin >> *(names+i);
		cout << "Enter your age: ";
		cin >> *(age+i);
	}
	for(int i = 0; i < 3; i++){
		cout <<*(names+i) << " " << *(age+i) << endl;
	}
	delete [] age;
	age = NULL;
	return 0;
}
