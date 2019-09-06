#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	long long int max = 0;
	int arr[n];
	for(int i = n; i >= 1; i--){
		arr[i] = n+1 -i;
	}
	for (int i = 1; i <=n; i++){
		arr[i] = i % arr[i];
	}
	for(int i = 1; i <= n; i++){
		max = max + arr[i];
	}
	cout << max << endl;
	return 0;
}
	
