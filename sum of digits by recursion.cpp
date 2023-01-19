#include<iostream>
using namespace std;
int sum(int x){
	if(x==0)
		return 0;
	return x%10 + sum(x/10);
}
int main(){
	int num;
	cin >> num;
	cout << "Sum of digits is " << sum(num) << endl;
	return 0;
}
