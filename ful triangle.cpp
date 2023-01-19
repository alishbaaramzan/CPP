#include <iostream>
using namespace std;

int main(){
    int space, rows;

    cout <<"Enter number of rows: ";
    cin >> rows;

    for(int i = 1, k = 0; i <= rows; ++i, k = 0)
    {
        for(space = 1; space <= rows-i; ++space)
        {
            cout <<"  ";
        }

        while(k != 2*i-1)
        {
            cout << "* ";
            ++k;
        }
        cout << endl;
    }    
    return 0;
}



// Method 2 using only for loop

// #include <iostream>
// using namespace std;
// int main(){
//     //n are number of rows you also get them on run time
//     int n=4;
//     // formula for number of spaces
//     int k = 2 * n - 2; 
 
//     // Outer loop to handle number of rows
//     // n in this case
//     for (int i = 0; i < n; i++) {
 
//         // Inner loop to handle number spaces
//         // values changing acc. to requirement
//         for (int j = 0; j < k; j++)
//             cout << " ";
 
//         // Decrementing k after each loop
//         k = k - 1;
 
//         // Inner loop to handle number of columns
//         // values changing acc. to outer loop
//         for (int j = 0; j <= i; j++) {
//             // Printing stars
//             cout << "* ";
//         }
 
//         // Ending line after each row
//         cout << endl;
//     }
// }
