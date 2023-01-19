#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int science(void);
int history(void);
int sports(void);
int pop_culture(void);
int main(){
	srand(time(0));
	int count = 0;
	int prize = 0;
	while(count<15){
		int turn = (rand()%4) + 1;
		if(turn==1){
			cout << "Question asked in science"<< endl;
			int x = science();
			if(x!=5)
		   		prize+=x;
		   	else	
		   		break;
		   }
		else if(turn==2){
			cout << "Question asked in history"<< endl;
			int x= history();
			if(x!=5)
		   	    prize+=x;
		   	else	
		   		break;
		   	}
	    else if(turn==3){
	    	cout << "Question asked in sports"<< endl;
	    	int x = sports();
	    	if(x!=5)
		   		prize+=x;
		   	else	
		   		break;
		   }
	    else if(turn==4){
	    	cout << "Question asked in pop culture"<< endl;
	    	int x = pop_culture();
	    	if(x!=5)
		   		prize+=x;
		   	else	
		   		break;
		   }
		    
	count++;	
	}
	cout << "You have answered " << prize << " questions correct" << endl;
	if(prize>10)
		cout << "Prize money is " << prize*15000 << " rupees " << endl;
	else if(prize>=7)
		cout << "Prize money is " << prize*10000 << " rupees " << endl;
	else if(prize>=4)
		cout << "Prize money is " << prize*1000  << " rupees " << endl;
	else if(prize>=1)
		cout << "Prize money is " << prize*100   << " rupees " << endl;
	
	return 0;
}

int science(void){
	static int ns = 50;
	int answer = ((rand()%(100-ns))+1) + ns;
	if(answer>20){
	if(answer==100){
		cout << "Correct answer in science!" << endl;
		ns-=10;
		return 1;
		}
	else{
		cout << "Incorrect answer!" << endl;
		return 0;
	}
}

	else
	 	return 5;
}

int history(void){
	static int nh = 50;
	int answer = ((rand()%(100-nh))+1) + nh;
	if(answer>20){
	if(answer==100){
		cout << "Correct answer in history!" << endl;
		nh-=10;
		return 1;
	}
	else{
		cout << "Incorrect answer!" << endl;
		return 0;
	}
	}
	else
		return 5;
}

int sports(void){
	static int nsp = 50;
	int answer = ((rand()%(100-nsp))+1) + nsp;
	if(answer>20){ 
	if(answer==100){
		cout << "Correct answer in sports!" << endl;
		nsp-=10;
		return 1;
		}
	else{
		cout << "Incorrect answer!" << endl;
		return 0;
	}
}
	else
		return 5;
}

int pop_culture(void){
	static int np = 50;
	int answer = ((rand()%(100-np))+1) + np;
	if(answer>20){          
	if(answer==100){
		cout << "Correct answer in pop culture!" << endl;
		np-=10;
		return 1;
		}
	else{
		cout << "Incorrect answer!"<< endl;
		return 0;
	}
}
	else
		return 5;
}
