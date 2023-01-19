#include<iostream>
using namespace std;


int main(){
	int n;
	int hours;
	int gross_sales;
	int items;
	cout << "For Managers, enter 1" << endl;
	cout << "For hourly workers, enter 2" << endl;
	cout << "For commission workers, enter 3" << endl;
	cout << "For pieceworkers, enter 4" << endl;
	cin >> n;
	
	switch(n){
		case 1:
			cout << "Your salary for this week is 10,000$\n"; // We'll assume the fixed salary
			break;
		case 2:
			cout << "Enter the number of hours worked\n"; // We'll assume the fixed salary per hour be 10$
			cin >> hours;
			if(hours<=40)
				cout << "Your salary is " << hours*10 << "$\n";
			else if(hours>40)
				cout << "Your salary is " << 40*10 + (hours-40)*(15) << "$\n";
			break;
		case 3:
			cout << "Enter your gross weekly sale\n";
			cin >> gross_sales;
			cout << "Your salary is " << 250 + 0.057*gross_sales << "$\n";
			break;
		case 4: 
			cout << "Enter number of items produced\n";
			cin >> items;
			cout << "Your salary is " << 100*items << "$\n"; //We'll assume that each item is paid with 100$
			break;
			
	}
	return 0;
}
