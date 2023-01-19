#include <iostream>
using namespace std;

int main(){
	int x = 3, z = 4, y;
	y = (++x) + (x++);
	cout <<y <<endl;
	return 0;
}
