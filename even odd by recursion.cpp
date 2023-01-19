#include<iostream>
using namespace std;

int func(int x){
	if(x==0)
		return 0;
	if(x==1)
		return 1;
	func(x-2);
}
int main(){
	int x;
	cin >> x;
	int y = func(x);
	if(y==0)
		cout << "EVEN!" << endl;
	if(y==1)
		cout << "ODD!" << endl;
	return 0;
	
}
