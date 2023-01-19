#include<iostream>
using namespace std;

int main(){
	int a = 5;
	void* b = &a;
	// cout << *b << endl; //error cuz void pointers can not be dereferenced
	cout << *((int*)b) << endl; // correct
	cout << *(static_cast<int*>(b)) << endl;  //correct
	return 0;
}
