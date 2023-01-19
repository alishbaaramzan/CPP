#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
	int num;
	srand(time(0));
	while(true){
		cout << "Guess the number between 0 and 9" <<endl;
		cin >> num;
		int hehe= rand();
		if( num== hehe/10){
			cout << "Winner";
			break;
		}
		else{
			continue;
		}
	}
	return 0;
}
