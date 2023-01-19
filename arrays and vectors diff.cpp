#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector <int> vect;
	vect.push_back(10);
	vect.push_back(11);
	for(int x : vect)
		cout <<x << " ";
	return 0;
}
