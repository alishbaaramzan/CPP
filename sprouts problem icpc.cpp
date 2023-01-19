#include<iostream>
#include <cmath>
using namespace std;

int alongwell(){
	int A,B,N,K;
	cin >> A >> B >> N >> K;
	int count = 0;
	for(int i = 1; i <= N; i++){
		for(int j = 1; j <= N; j++){
			int i_A = pow(i,A) ;
			int j_B = pow(j,B);
			if((i!=j) && (i_A+j_B)%K ==0){
				count++;
			}
		}
	}
	return count;
}
int main(){
	int test;
	cin >> test;
	for(int i = 1; i <= test; i++){
		cout << "case# " <<i << ": " << alongwell() << endl;
	}
	return 0;
}
