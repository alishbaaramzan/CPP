#include<iostream>
#include<string>
using namespace std;

string substring(int s, int e, string text){
	string temp ="";
	for(int i = s; i <= e; i++){
		temp+= text[i];
	}
	return temp;
}
int main(){
	string text;
	int start, end;
	cout << "Enter a sentence:\n";
	getline(cin,text);
	cout << "Enter starting index:";
	cin >> start;
	cout << "Enter ending index:";
	cin >> end;
	string new_string = substring(start,end,text);
	cout << "The new substring is:\n" << new_string << endl;
	return 0;	 
}
