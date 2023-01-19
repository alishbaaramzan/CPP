#include<iostream>
#include<iomanip>
using namespace std;

void pattern (int,int,int,int,char);
int main(){
	int steps, height, width;
	char ast = 42;
	cout << "Enter number of steps: ";
	cin >> steps;
	cout << "Enter the height of each step: ";
	cin >> height;
	cout << "Enter the width of each step: ";
	cin >> width;
	int x = steps;
	int filler = 1;
	for(int i = 1; i<= x; i++){
		pattern(height,width,steps,filler,ast);
		steps--;
		ast++;
		filler+=width;
	}
	for(int i=1; i<=(width*x)+width ; i++){
		cout << "*";
	}
	return 0;
}

void pattern(int h, int w, int s,int f, char c){
	for(int i=1; i<=h+1; i++){
		cout << setw(w*s);
		for(int j=1; j<=w; j++){
			if(i==1 || j==1)
				cout << c;
			else
				cout << " ";
			
		}
		cout << setw(f);
		cout << c;
		cout << endl;
			
	}
	
}
