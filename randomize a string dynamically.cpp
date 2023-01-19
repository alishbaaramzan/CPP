#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
	char* str = new char[100];
	int* rep = new int[100];
	int i = 0;
	int check;
	bool permit;
	cin >> str;
	int len = 0;
	for(int j = 0; j < 100; j++){
		if(*(str+j)=='\0')
			break;
		len++;
	}
	check = len;
	srand(time(NULL));
	while(check!=0){
		permit = true;
		int x = rand() % len;
		for(int j = 0; j < i; j++){
			if(*(rep+j)==x)
				permit = false;
			else {
				*(rep+i)=x;
				i++;
			}
		}
		if(permit){
			cout << *(str+x);
			check--;
		}
	}
	delete [] str;
	delete [] rep;
	str = NULL;
	rep = NULL;
	return 0;
	
}
