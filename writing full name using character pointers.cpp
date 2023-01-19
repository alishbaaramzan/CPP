#include<iostream>
using namespace std;

int main(){
	char* first = new char[100];
	char* last = new char[100];
	cout << "Enter first name: ";
	cin >> first;
	cout << "Enter last name: ";
	cin >> last;
	cout << first <<" " << last << endl;
	delete [] first;
	delete [] last;
	first = NULL;
	last = NULL;
	return 0;
}
