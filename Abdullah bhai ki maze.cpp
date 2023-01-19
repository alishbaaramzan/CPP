#include <iostream>
using namespace std;
# define ROWS  9    
# define COLUMNS  16
int mouseshape = 80;
int cheeseshape = 90;
int wallshape = -1;
int boundry = 42;

bool runMouse(int arr[][COLUMNS], bool arr2[][COLUMNS], int row, int col,int count) {

    if (count == 1001) {//function would stop after 1000 recursions of failure
        return false;
    }
    
    if (arr[row][col] == cheeseshape) {
       // cout << "found";
        return true;
    }


    arr2[row][col] = false;//not allowing the move for future use

    

    if (arr2[row][col + 1]  && runMouse(arr,arr2,row,col+1,count + 1)) {
        if (arr[row][col+1] != cheeseshape) {//if condition to not change the cheeseshape to 1
            arr[row][col + 1] = 1;
        }
        return true;
    }

    if (arr2[row][col - 1] && runMouse(arr, arr2, row, col - 1, count + 1)) {

        if (arr[row][col - 1] != cheeseshape) {//if condition to not change the cheeseshape to 1
            arr[row][col - 1] = 1;
        }
        
        return true;
    }

    if (arr2[row+1][col] && runMouse(arr,arr2, row + 1, col, count + 1)) {

        if (arr[row + 1][col] != cheeseshape) {//if condition to not change the cheeseshape to 1
            arr[row + 1][col] = 1;
        }
        return true;
    }

   

    if (arr2[row-1][col] && runMouse(arr,arr2, row-1, col, count + 1)) {
        if (arr[row - 1][col] != cheeseshape) {//if condition to not change the cheeseshape to 1
            arr[row - 1][col] = 1;
        }
        
        return true;
    }

    return false;
}

void driver_func(int arr[][COLUMNS]) {


    bool check[ROWS][COLUMNS];//creating an array to keep a record of all possible next moves

    for (int i = 0; i < COLUMNS; i++) {
        for (int k = 0; k < ROWS; k++) {

            check[k][i] = true;
            if (arr[k][i] == wallshape || arr[k][i] == boundry) {
                check[k][i] = false;
            }
        }
    }


    
    //iterating to find the initial location of our mouse and sending it to our function
    for (int i = 0; i < COLUMNS; i++) {
        for (int k = 0; k < ROWS; k++) {
            if (arr[k][i] == mouseshape) {
                runMouse(arr, check, k, i,1);
            }
        }
    }
}


int main() {

    int arr[ROWS][COLUMNS] = { {42,  42,   42,  42, 42,  42,  42, 42, 42, 42, 42, 42,  42,  42,  42, 42},
                               {42,  80,    0,   0,  -1,   0,   0,  0, -1,  0, -1,  0,   0,  0,    0, 42},
                               {42,  -1,   -1,   0,  -1,  -1,  -1,  0, -1,  0, -1,  0,  -1, -1,   -1, 42},
                               {42,  -1,   -1,   0,  -1,  -1,  -1,  0, -1,  0, -1,  0,  -1, -1,   -1, 42},
                               {42,   0,    0,   0,   0,   0,  -1,  0,  0,  0, -1,  0,   0,  0,    0, 42},
                               {42,   0,   -1,  -1,  -1,   0,  -1,  0, -1,  0, -1,  0,  -1, -1,    0, 42},
                               {42,  90,   -1,  -1,  -1,   0,  -1,  0, -1,  0, -1,  0,  -1, -1,    0, 42},
                               {42,   0,   -1,   0,   0,   0,   0,  0, -1,  0,  0,  0,  -1, -1,    0, 42},
                               {42,  42,   42,  42, 42,  42,  42, 42, 42, 42, 42, 42,  42,  42,   42, 42}, };

    

    driver_func(arr);



    //loops to print our array;
    for (int k = 0; k < ROWS; k++) {
        for (int i = 0; i < COLUMNS; i++) {

            cout << arr[k][i]<<" ";
            
        }
        cout << endl;
    }




}
