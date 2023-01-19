#include <iostream>
using namespace std;

int main()
{
	//declaring variables
	double mc, rent, salary, elec_bill, totalcost, markup, markup_percentage;
	
	//taking inputs
	cout << "Merchandise cost: ";
	cin >> mc;
	cout << "Store rent: ";
	cin >> rent;
	cout << "Employees' salary: ";
	cin >> salary;
	cout << "Annual electricity bill: ";
	cin >> elec_bill;
	
	//performing calculations
	totalcost = (1.1*mc) + salary+ rent + elec_bill;
	markup = totalcost/0.85; 
	markup_percentage = (markup-mc)/mc * 100;
	
	
	//printing result
	cout << "Markup amount is " <<markup <<endl;
	cout << "Markup percentage is " << markup_percentage << "%"<<endl;
	
	
	return 0;
}
