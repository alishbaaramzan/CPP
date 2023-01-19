#include<iostream>
using namespace std;

string shiftLeft(string &a, int l){
	string c;
	int x=0;
	int s =0;
	while(a[x++]!='\0'){
		s++;
	}
	cout << s << endl;
	for(int i = 0; i < l; i++){
		c+=a[i];
	}
	string temp;
	for(int i = l; i < s; i++ ){
		temp+=a[i];
	}
	a=temp;
	return c;
}
string shiftRight(string &a, int l){
	string c;
	int x = 0;
	int s =0;
	while(a[x++]!='\0'){
		s++;
	}
	cout << s << endl;
	for(int i = s-1; i >= s-l; i--){
		c+=a[i];
	}
	string temp;
	for(int i = 0; i < s-l; i++ ){
		temp+=a[i];
	}
	a=temp;
	return c;
}

int main(){
	string a = "ABCDEFG";
	string c = shiftLeft(a,3);
	cout << c << endl;
	cout << a << endl;
	string d = shiftRight(a,3);
	cout << d << endl;
	cout << a << endl;
	
	return 0;
}
