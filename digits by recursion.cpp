#include<iostream>
using namespace std;
int digits(int x){
	if(x==0)
		return 0;
	return 1 + digits(x/10);
}
int main(){
	int num;
	cin >> num;
	cout << "Number of digits is " << digits(num) << endl;
	return 0;
}
