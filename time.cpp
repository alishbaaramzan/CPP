#include<iostream>
#include<windows.h>
#include<unistd.h>
#include<ctime>
using namespace std;

int main(){
	while(true){ 
	time_t current_time = time(0);
	char* tm = ctime(&current_time);
	cout << "Today is " << tm << endl;
	sleep(10);
}
	return 0;
}
