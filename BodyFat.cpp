#include<iostream>
#include<string>
using namespace std;

int main()
{   char gender;
	double bodyweight, wrist, waist, hip, forearm;
    cout << "Male/Female?(m/f) ";
	cin >> gender;
	if (gender == 'f')
	   {   cout << "Body weight: "; cin >> bodyweight;
	  	   cout << "Wrist measurement (at fullest point): "; cin >> wrist;
	  	   cout << "Waist measurement (at navel): "; cin >> waist;
	  	   cout << "Hip measurement (at fullest point): "; cin >>hip;
	  	   cout << "Forearm measurement (at fullest point): "; cin >> forearm;
	  	   double A1= (bodyweight * 0.732) + 8.987;
	  	   double A2 = wrist / 3.140 ;
	  	   double A3 = waist * 0.157;
	  	   double A4 = hip * 0.249;
	  	   double A5 = forearm * 0.434;
	  	   double Fat = A1+A2-A3-A4+A5;
	  	   double BodyFat = bodyweight - Fat;
	  	   double FatPercentage = (BodyFat/bodyweight) * 100;
	  	   cout << "Your body fat is: " << BodyFat <<endl << "Fat Percentage is: " << FatPercentage << "%" << endl;
	  	   
	}
	else if (gender == 'm')
		{  cout << "Body weight: "; cin >> bodyweight;
		   cout << "Wrist measurement: "; cin >> wrist;
		   double A1 = (bodyweight * 1.082) + 94.42;
		   double A2 = wrist * 4.15;
		   double Fat = A1 -A2;
		   double BodyFat = bodyweight - Fat;
		   double FatPercentage = (BodyFat/bodyweight)* 100;
		   cout << "Your body fat is: " << BodyFat <<endl << "Fat Percentage: " << FatPercentage << "%" <<endl;
		}
	else 
	{ cout << "Sorry, can't help";
	}

	return 0;
}
