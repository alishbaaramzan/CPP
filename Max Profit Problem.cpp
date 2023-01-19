#include <iostream>
using namespace std;

int main()
{
	//declaring variables
	double rent,raise,maintenance_cost;
	double profit, max_profit_units = 0;
	int  occupied_flats;
	
	//taking inputs
	cout << "Flats: ";
	cin >> occupied_flats;
	cout << "Rent(when all flats are occupied): ";
	cin >> rent;
	cout << "Maintenance cost: ";
	cin >> maintenance_cost;
	cout << "Increase in rent per vacancy: ";
	cin >> raise;
	
	
	
	//starting a while loop for calculations
	while(occupied_flats > 0){
		double p = (rent*occupied_flats) - (maintenance_cost*occupied_flats);
		
		if(p>profit){
			profit = p;
			max_profit_units = occupied_flats;
			
		}
		rent+=raise;
		occupied_flats--;
	}
	 
	 //printing result
	 cout << "Maximum profit is " << profit <<endl;
	 cout << "Number of units occupied for maximum profit is " << max_profit_units <<endl;
	 return 0;
}
