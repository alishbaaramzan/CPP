#include <iostream>
using namespace std;
int game(bool arr[4][4]){
	int hits = 0;
	cout << "Game starts!" << endl;
	while(hits<6){
		int row, column;
		cout << "Row: ";
		cin >> row;
		cout << "Column: ";
		cin >> column;
		if(arr[row-1][column-1]){
			arr[row-1][column-1] = 0;
			cout << "Hit!" << endl;
			hits++;
			cout << 6-hits << " hits left" << endl;
		}
		else
			cout << "Miss\n" << 6-hits << " hits left" << endl; 
	}
}
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
	 game(ships);
	//arrays passed act as pointers too
	 for(int i=0; i < 4; i++){
	 	for (int j = 0; j < 4; j++){
	 		cout << ships[i][j] << " ";
		 }
		 cout << endl;
	 }
	cout << "Victory! " << endl;
	return 0;
}


