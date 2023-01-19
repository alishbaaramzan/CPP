#include<iostream>
using namespace std;

int main(){
	char* str = new char[100];
	cin >> str;
	int len  = 0;
	for(int i = 0; i <100; i++){
		if(*(str+i)=='\0')
			break;
		len++;
	}
	int check = 0;
	for(int i = 0; i <= len/2; i++){
		if(*(str+i)==*(str+len-i-1))
			check++;
		
	}
	if(check==len/2 + 1)
		cout << str << " is palindrome" << endl;
	else
	 	cout << str << " is not a palindrome" << endl;
	delete [] str;
	str = NULL;
	return 0;
}
