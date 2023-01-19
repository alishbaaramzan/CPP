#include<iostream>
using namespace std;
int func(int x){
	if(x==1)
		return 1;
	return x + func(x-1);
	
}
int main(){
	int n;
	cout << "How many numbers do you wish to add in sequence starting from 1?";
	cin >> n;
	int sum= func(n);
	cout<< "Sum of first " << n <<" natural numbers is " << sum << endl;
	return 0;
}
