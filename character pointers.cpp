#include<iostream>
#include<vector>
using namespace std;

int max_power(int*array, int n, int m){
	int mp = 0, m_p=0;
	while(m!=0){
	for(int i = 0; i < n; i++){
		if(array[i]!=m+1 && array[i]!=m-1){
			mp+=array[i];
		}
	}
	if(m_p<mp)
		m_p = mp;
	mp =0;
	--m;
}
	return m_p;
	
	
}
int main(){
	int testc;
	cin >> testc;
	int N;
	int max = 0;
	for(int i = 0; i <testc; i++){
		cin >> N;
		int* arr = new int[N];
		for(int i = 0; i < N; i++){
			cin >> arr[i];
			if(arr[i]>max)
				max = arr[i];
		}
		cout << max_power(arr,N,max) << endl;
		delete[] arr;
		arr = NULL;
	}
	return 0;
}
