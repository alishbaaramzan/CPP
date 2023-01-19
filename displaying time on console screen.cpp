#include<iostream>
#include<windows.h>
#include<ctime>
#include<cstdlib>
using namespace std;
int main(){
	
//time(0) gives us the numberof seconds that have passed since jan 1st, 1970
//we can use three ways to print that
	cout << time(0) << endl;
	time_t current_time = time(0);
	cout << current_time << endl;
	time(&current_time);
	cout << current_time << endl;
// Now let's print the time in a proper format to get date and time both
	while(true){
	char* tm = ctime(&current_time);
	cout << "Today is " << tm << endl;
}
	cout << "Today is " << current_time << endl; // perhaps current time was not altered
}
