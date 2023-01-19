#include<iostream>
using namespace std;

bool check(int arr[][16], int x, int y, int path[][16]){
	if((x<9 && y<16 && arr[x][y]==0 && path[x][y]==0) || (x<9 && y<16 && arr[x][y]==80 && path[x][y]==0)){
		return true;
	}
	return false;
}
bool traverse(int arr[][16], int x, int y, int path[][16]){
	if(arr[x][y]==90){
		path[x][y]=90;
		return true;
	}

	if(check(arr,x,y, path)){
		path[x][y] = 1;
		if(traverse(arr, x+1, y, path))
			return true;
		if(traverse(arr, x, y+1, path))
			return true;
		if(traverse(arr, x-1, y, path))
			return true;
		if(traverse(arr, x, y-1, path))
			return true;
		path[x][y]=0;
		return false;
	}
	return false;
}
int main(){
	int maze[9][16] ={
	{42,42,42,42,42,42,42,42,42,42,42,42,42,42,42,42},
	{42,80,0, 0, -1,0, 0, 0, -1, 0,-1,0, 0, 0, 0, 42},
	{42,-1,-1,0,-1,-1,-1,0,-1,0,-1,0, -1, -1, -1, 42},
	{42,-1,-1,0,-1,-1,-1,0,-1, 0,-1,0,-1, -1, -1, 42},
	{42, 0, 0, 0, 0,0, -1, 0, 0, 0,-1,0, 0, 0, 0, 42},
	{42,0,90,-1,-1,0,-1, 0,-1, 0,-1,0, -1, -1, 0, 42},
	{42,-1,-1,-1,-1,0,-1,0,-1, 0,-1,0, -1, -1, 0, 42},
	{42,0,-1, 0, 0,0, 0, 0, -1, 0,0,0, -1, -1, 0, 42},
	{42,42,42,42,42,42,42,42,42,42,42,42,42,42,42,42}
	};
	int mouse_path[9][16];
	for(int i = 0; i < 9; i++){
		for(int j = 0; j < 16; j++){
			mouse_path[i][j] = 0;
		}
	}
	if (traverse(maze, 1, 1, mouse_path)){
		for(int i = 0; i < 9; i++){
			for(int j = 0; j < 9; j++){
				cout << mouse_path[i][j]  << " ";
			}
			cout << endl;
		}
	}
	return 0;
}
	
	
	
	
	
