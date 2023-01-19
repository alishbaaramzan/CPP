#include<iostream>
using namespace std;

int main(){
	enum status {WON=1, LOST,CONTINUE};
	status gamestatus;
	int myPoint;
	int turns = 2;
	int dice1, dice2;
	cout << "PLay the two die: ";
	cin >> dice1 >> dice2;
	int sum = dice1 + dice2;
	switch(sum){
		case 7:
		case 11:
			cout << "You won" << endl;
			gamestatus = WON;
			break;
		case 2:
		case 3:
		case 12:
			cout << "You lose " << endl;
			gamestatus = LOST;
			break;
		default:
			gamestatus = CONTINUE;
			myPoint = sum;
	}
		while(gamestatus == CONTINUE){
			cout << "Roll the die: ";
			cin >> dice1 >> dice2;
			sum = dice1 + dice2;
			if(sum==myPoint){
				cout << "You won in " << turns << " turns" << endl;
				gamestatus = WON;
		}
			else if(sum==7){
				cout << "You lost" << endl;
				gamestatus = LOST;
			}
			else
				gamestatus = CONTINUE;
				turns ++;
		}
	return 0;
}
