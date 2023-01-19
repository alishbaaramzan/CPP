#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int roll_die(void){
	int die1 = rand()&6 + 1;
	int die2 = rand()&6 + 1;
	return die1 + die2;
}
int main(){
	enum status{WON, LOST, CONTINUE};
	srand(time(0));
	 status gamestatus;
	 int turns = 1;
	int myPoint = roll_die();
	if(myPoint==7 || myPoint==11){
		gamestatus= WON;
		cout << "You Won in " << turns << " turn " << endl;
	}
	else if(myPoint==2 || myPoint==3 || myPoint==12){
		gamestatus = LOST;
		cout << "You lost in " << turns <<" turn " << endl;
	}
	else
		gamestatus= CONTINUE;
	while(gamestatus==CONTINUE){
		int sum = roll_die();
		turns++;
		if(sum==7){
			gamestatus= LOST;
          	cout << "You lost in " << turns <<" turns " << endl;
		}
		else if(sum==myPoint){
			gamestatus= WON;
    		cout << "You win in " << turns << " turns " << endl;
		}
		else
			gamestatus = CONTINUE;
	}
   
    return 0;
}
