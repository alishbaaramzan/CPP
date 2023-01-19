#include<iostream>
#include<string>
using namespace std;

void replace(string &text, string pattern, int start, int end){
	string temp = "";
	for(int i = 0; i < start; i++){
		temp+=text[i];
	}
	int len = 0;
	while(pattern[len]!='\0'){
		len++;
	}
	int j = 0;
	for(int i = start; i < start+len;i++){
		temp+=pattern[j];
		j++;
	}
	for(int i = end+1; i < 100; i++){
		if(text[i]=='\0')
			break;
		temp+=text[i];
	}
	text=temp;
	
}
int main(){
	string text, pattern;
	cout << "Enter a sentence:\n";
	getline(cin,text);
	cout << "Enter the pattern to replace:\n";
	cin >> pattern;
	int s = 0, e = 0;
	cout << "Enter starting index:";
	cin >> s;
	cout << "Enter ending index:";
	cin >> e;
	replace (text,pattern,s,e);
	cout << "The new text is:\n" << text << endl;
	return 0;
}
