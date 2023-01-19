#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){     
	//enum weapon{PAPER=1, SCISSORS, ROCK};
	int user;
	srand(time(0));
	int computer = (rand() % 3) + 1;
	cout << "computer came up with " << computer << endl;
	cout << "1.paper\n2.scissors\n3.rock\n";
	cin >> user;
	if(user==computer){             
    if(user==3 && computer==3)
		cout << "Both are rock, it's a draw" << endl;
	else if(user==1 && computer==1)
		cout << "Both are paper, it's a draw" << endl;
	else
	    cout << "Both are scissors, it's a draw" << endl;
}
	else if(user==1 && computer==3){
		cout << "You win, paper vs. rock " << endl;
	}
	else if(user>computer){
		if(user==3 && computer==2){
			cout << "You win, rock vs. scissors " <<endl;
		}
		else if(user==2 && computer==1){
			cout << "You win, scissors vs. paper " << endl;
		}
		else 
			cout << "You lose " << endl;
	}
	else
	 	cout << "You lose" << endl;
	return 0;
}
