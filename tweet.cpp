#include<iostream>
#include<string>
using namespace std;

int main(){
	string line;
	cout << "Enter a line: ";
	getline(cin,line);
	int size = line.length();
	int i = 0, j = 0;
	string positive[10] = {"happy","good","sweet","love","hope","positivity","truth","calm","beautiful","patience"};
	string negative[10] = {"sad","evil","harsh","hate","hopeless","negativity","lie","upset","ugly","impatient"};
	string word[100];
	int num = 0;
	int* score = NULL;
	score = &num;
	for(i=0; i < size;  ){
		while(line[i]!=' ' && i<size){
			word[j]+=line[i];
			i++;
		}
		i++;
		j++;
	}
	
	for(int k = 0; k < j; k++){
		for(int l = 0; l < 10; l++){
			if(word[k]==positive[l]){
				*score +=1;
			}
			if(word[k]==negative[l]){
				*score -=1;
			}
		}
	}
	if(*score < 0){
		cout << "negative tweet as the score is " << *score << endl;
	}
	if(*score> 0){
		cout << "positive tweet as the score is " << *score << endl;
	}
	else
		cout << "neutral tweet" << endl;
	return 0;
}
