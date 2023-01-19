#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
	char* str = new char[100];
	cin >> str;
	int len = 0;
	int check = 0;
	for(int i= 0; i < 100; i++){
		if(*(str+i)=='\0')
			break;
		len++;
	}
	while(check<len){
		int x = rand() % len;
		if(*(str+x)!= ' '){
			cout << *(str+x);
			*(str+x)= ' ';
			check++;
		}
	}
	delete [] str;
	str = NULL;
	return 0;
}
	
	
