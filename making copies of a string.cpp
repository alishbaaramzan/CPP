#include<iostream>
using namespace std;

int main(){
	char* str = new char[100];
	cin >> str;
	cout << str << str << endl;
	delete [] str;
	str = NULL;
	return 0;
}
