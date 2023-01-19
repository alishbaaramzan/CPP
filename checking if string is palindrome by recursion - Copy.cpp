#include<iostream>
using namespace std;

bool palindrome(char* string, int l, int i){
	if(i>l/2)
		return true;
	if(*(string+i) == *(string+l-i-1))
		return palindrome(string,l,i+1);
	else
		return false;
}
int main(){
	char* str = new char[100];
	cin >> str;
	int len  = 0;
	for(int i = 0; i <100; i++){
		if(*(str+i)=='\0')
			break;
		len++;
	}
	if(palindrome(str,len,0)){
		cout << str << " is palindrome" << endl;
	}
	else
		cout << str << " is not a palindrome" << endl;
	delete [] str;
	str = NULL;
	return 0;
}
