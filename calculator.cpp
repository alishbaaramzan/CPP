#include<iostream>
using namespace std;
int main(){
    float num1, num2;
    char option=0;
     while (option!='e'){
        cout << "Which operation you want to perform: " << endl << "1) for Addition press +\n2) for Subtraction press -\n3) for Devision press /\n4) for Multipulication press *\n5) press e to exit " ;
        cin >> option;
        if (option!='e'){
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;
        cout << endl;
        switch (option){
            case '+':
            cout << num1 << " + " <<  num2 << " = " << num1 + num2 << endl;
            break;
            case '-':
            cout << num1 << " - " <<  num2 << " = " << num1 - num2 << endl;
            break;
            case '/':
            cout << num1 << " / " <<  num2 << " = " << num1 / num2 << endl;
            break;
            case '*':
            cout << num1 << " * " <<  num2 << " = " << num1 * num2 << endl;
            break;
            default:
            cout << "operation could not proceed because you have not select right option: ";
         }
        }
        cout << endl;

    
    }
}