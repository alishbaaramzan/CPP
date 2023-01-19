#include<iostream>
using namespace std;

int main(){
	char* string = new char[100];
	cin >> string;
	int lenString = 0;
	int check=0;
	for(int i = 0; i < 100; i++){
		if(*(string+i) == '\0'){
			break;
		}
		lenString++;
	}
	for(int i = 0; i < lenString/2; i++){
		if(*(string+i)==*(string+(lenString-1-i))){
			check++;
		}
	}
	if(check==lenString/2){
		cout << "String is a palindrome" << endl;
	}
	else 
		cout << "String is not palindrome" << endl;
		delete [] string;
		string = NULL;
	return 0;
}
