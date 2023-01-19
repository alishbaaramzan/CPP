#include<iostream>
using namespace std;

int main(){
	char name[] = "Alishba";
	char* p;
	p = name;
	cout << p << endl;
	int i = 0;
	while(*(p+i)!='\0'){
		cout << *(p+i) << endl;
		i++;
	}
	return 0;
}
