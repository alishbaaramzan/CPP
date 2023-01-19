#include<iostream>
using namespace std;
int array[5];
void input_array(void){
	static int i = 0;
	if(i==5)	
		return;
	cin >> array[i];
	i++;
	input_array();
}
int main(){
	input_array();
	for(int i = 0; i< 5; i++){
		cout << array[i] << " ";
	}
	return 0;
}
