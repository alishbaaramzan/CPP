#include<iostream>
using namespace std;

int main(){
	char string[20];
	cin >> string;
	for(int i = 0; i<= 20; i++){
		if(string[i]>= 'a' && string[i]<='z' || string[i]>='A' && string[i]<='Z'  )
			cout << string[i];	
		else
			continue;
			
	}
	
	return 0;
}
