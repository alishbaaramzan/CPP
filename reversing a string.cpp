#include<iostream>
#include<string>
using namespace std;

void reverse(string &text){
	string temp = text;
	int len = 0;
	while(text[len]!='\0'){
		len++;
	}
	int l = len-1;
	for(int i = 0; i <len; i++ ){
		text[i]=temp[l];
		l--;	
	}
}
int main(){
	string text, pattern;
	cout << "Enter a sentence:\n";
	getline(cin,text);
	reverse(text);
	cout << "Reversed string is " << text << endl;
	return 0;
}
