#include <iostream>
#include<string>
using namespace std;

int main(){
	char s[] = "A string";
	char* ptr = s;
	cout << s[0] <<" " << (int*)ptr <<" "<< *(ptr + 3) << endl;
	ptr = ptr+2;
	cout << (int*)ptr << " "<< *(ptr+2) << " "<< *( ptr + 5) << endl;
	return 0;
}
