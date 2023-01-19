#include<iostream>
using namespace std;

int main(){
	char *string = "Hello there";
	int len = 0;
	while(*(string++)!='\0'){
		len++;
	}
	cout << "The length is " << len << endl;
	return 0;
}
