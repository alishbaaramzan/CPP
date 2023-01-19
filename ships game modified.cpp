#include <iostream>
using namespace std;

int main(){
	bool ships[4][4] = {0};
	int row,column;
	cout << "You have four rows and four columns, place six ships at random positions ";
	for(int i = 1; i <= 6; i++){
		row, column = 0;
		cout << "Row: ";
		cin >> row;
		cout << "Column: ";
		cin >> column;
		ships[row-1][column-1] = 1;
	}
	int hits = 0;
	int numberOfTurns = 0;
	cout << "Game starts!" << endl;
	while(hits<6){
		cout << "Row: ";
		cin >> row;
		cout << "Column: ";
		cin >> column;
		if(ships[row-1][column-1]){
			cout << "Hit!" << endl;
			hits++;
			cout << 6-hits << " hits left" << endl;
		}
		else
			cout << "Miss\n" << 6-hits << " hits left" << endl; 
		numberOfTurns++;
	}
	cout << "Victory! " << endl;
	cout << "You won in " << numberOfTurns << " number of turns " << endl;
	return 0;
}


