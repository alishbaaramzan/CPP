#include<iostream>
using namespace std;

int palindrome(char a[],int s,int n){
	static int check = 0;
	if(s>=n){
		return check;
	}
	if(a[s]==a[n]){
		check++;
		palindrome(a,s+1,n-1);
	}
}
int main(){
	char arr[100];
	cin >> arr;
	int len=0;
	for(int i = 0; i < 100; i++){
		if(arr[i]=='\0')
			break;
		len++;
	}
	int y = palindrome(arr,0,len-1);
	if(y==len/2)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
	
}
