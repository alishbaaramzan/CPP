#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
	srand(time(NULL));
	int n = 0;
	int arr[11]= {0};
	while(n<36000){
		int x = rand()%6 + 1;
		int y = rand()%6 + 1;
		for(int i = 2; i <=12; i++){
			if(x+y==i){
				arr[i]++;
			}
		}
		n++;	
	}
	for(int i = 2; i <= 9; i++){
		cout << i << "  | " << arr[i] << " times rolled\n";
	}
	for(int i = 10; i <= 12; i++){
		cout << i << " | " << arr[i] << " times rolled\n";
	}
	return 0;
}
