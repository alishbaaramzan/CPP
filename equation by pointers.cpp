#include<iostream>
using namespace std;

void solver(float* p){
	*p = (*p)*(*p) + 4*(*p) - 50;
	for(int i = 0; i < 2; i++){
		(*p)*=(*p);
	}
}
int main(){
	float* arr = new float[5];
	for(int i = 0; i < 5; i++){
		cin >> *(arr+i);
		solver(arr+i);
	}
	for(int i = 0; i < 5; i++){
		cout << *(arr+i)<<" "; 
	}
	delete [] arr;
	return 0;
}
