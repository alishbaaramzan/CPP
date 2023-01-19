#include<iostream>
using namespace std;

int main(){
	int date,month,year;
	cout << "Date: ";
	cin >> date;
	cout << "Month: ";
	cin >> month;
	cout << "Year: ";
	cin >> year;
	int age_years = 2021 - year;
	int age_months = (12-month) + 10;
	if(age_months >= 12){
		age_years++;
		age_months-=12;
	}
	int age_days = date + 10;
	cout << age_years << " years " << ((age_months*30)+age_days)/30 <<" months " << ((age_months*30)+age_days)%30 << " days ";
	if (age_years >=18){
		cout << "Eligible for vote" <<endl;
	}
	else{
		cout << "Not eligible for vote " <<endl;
	}
	return 0;
}
