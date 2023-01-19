#include<iostream>
using namespace std;

int main(){
	int total,reg_no,marks;
	int p,f=0;
	char list;
	int pass_students[50];
	int failed_students[50];
	cout << "Enter total number of students: " ;
	cin >> total;
	for(int i = 0; i < total; i++){
		cout << "Enter reg no of student " << i+1 << ": ";
		cin >> reg_no;
		cout << "Enter marks(out of 1100) of student " << i+1 <<": ";
		cin >> marks;
		cout << endl;
		if(((float)marks/11) >= 45.0){
			pass_students[p]=reg_no;
			p++;
		}
		else{
			failed_students[f]=reg_no;
			f++;
		}
	}
	cout << "List of passed(enter p) or failed(enter f) students: ";
	cin >> list;
	if(list=='p'){
		cout << "The passed students are: "<< endl;
		for(int i = 0; i < p ; i++){
			cout << pass_students[i] << endl;
		}
	}
	else if (list=='f'){
		cout << "The failed students are: " << endl;
		for(int i = 0; i < f; i++){
			cout << failed_students[i] << endl;
		}
	}
	else
		cout << "Sorry, can't help " << endl;
	return 0;
}
