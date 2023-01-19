#include<iostream>
#include<string>
using namespace std;

int main(){
	string arr[] = {"red", "purple", "green"};
	cout << sizeof(arr) <<endl;
	cout << sizeof(arr)/sizeof(string) <<endl;
	return 0;
}
