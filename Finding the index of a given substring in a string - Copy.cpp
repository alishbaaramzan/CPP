#include<iostream>
#include<string>
using namespace std;

void find(string text, string pattern,int &index1, int &index2 ){
	string temp;
	int i = 0;
	int j = 0;
	while(text[i]!='\0'){
		temp="";
		for(j = i; j < 100; j++){
			index1 = i;
			if(text[j]==' ' || text[j]=='\0')
				break;
			temp+=text[j];
		}
		index2 = j-1;
		i=j+1; 
		if(temp==pattern)
			break;	
	}
}
int main(){
	string text, pattern;
	cout << "Enter a sentence:\n";
	getline(cin,text);
	cout << "Enter the pattern to find:\n";
	cin >> pattern;
	int s = 0, e = 0;
	find(text,pattern,s,e);
	cout << "The pattern occurs at " << s << "," << e << endl;
	return 0;
	
}
