#include<iostream>
using namespace std;
int main(){
    float marks[5];
    float sum =0;
    float percentage=0;
    for(int i=0; i<5; i++){
        cout << "Enter Marks of Subject " << i+1 << " ";
        cin >> marks[i];
        if (marks[i]>100){ // to make sure marks could not be grater then 100
            cout << "Marks cannot be greater then 100: "<< endl << "Please Enter Marks again: " << endl;
            i--;
        }else{
            sum = sum + marks[i];
            cout << endl;
        }
        
    }
    percentage = (sum*100)/500;
    cout << "Total Marks = 500" <<endl;
    cout << "Obtained Marks = " << sum << endl << "Percentage = " << percentage << "%";
    return 0;
}