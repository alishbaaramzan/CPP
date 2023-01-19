#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
using namespace std;


enum weapon{
	ROCK = 1,
	PAPER,
	SCISSORS,
};
string show (int h){
	if(h==1) return "Computer chooses ROCK!\n";
	if(h==2) return "Computer chooses PAPER!\n";
	if(h==3) return "Computer choose SCISSORS!\n";
}
void winner(weapon a, weapon b){
	if(a==ROCK && b== PAPER) cout << "Computer wins!\n";
	if(a==ROCK && b== SCISSORS) cout << "Human wins!\n";
	if(a==SCISSORS && b== PAPER) cout << "Human wins!\n";
	if(a==SCISSORS && b== ROCK) cout << "Computer wins!\n";
	if(a==PAPER && b== ROCK) cout << "Human wins!\n";
	if(a==PAPER && b== SCISSORS) cout << "Computer wins!\n";
	else if (a == b) cout << "DRAW!\n";
	
	
}
int main (){
	int human_choice;
	weapon human;
	weapon computer;
	int maxGames = 5;
	int gamesPlayed = 0;
	while(gamesPlayed<maxGames){
	cout << "What do you wish to choose[ROCK is default]: (1) ROCK\n(2) PAPER\n(3) SCISSORS\n";
	cin >> human_choice;
	if(human_choice==1)	
		human=ROCK;
	else if(human_choice==2)	
		human=PAPER;
	else if(human_choice==3)	
		human=SCISSORS;
	else 
		human = ROCK;
	srand(time(NULL));
	int x = rand()% 3 +1;
	if(x==1)	
		computer=ROCK;
	else if(x==2)	
		computer=PAPER;
	else if(x==3)	
		computer=SCISSORS;
	cout << show(x);
	winner(human, computer);
	gamesPlayed++;
}
return 0;
	
	
	
}

