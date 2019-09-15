#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,s,k;
	cin >> n >> s >> k;
	int arr[n], arr1[k];
	memset(arr, s, sizeof(arr));
	for(int i = 1; i <= k; i++){
		cin >> arr1[i];
		cout << arr1[i]<< endl;
		int val = arr1[i];
		arr[val]= arr[val] + 1;
		cout << arr[val] << endl;
	}
	for(int i = 1; i <= n; i++){
		arr[i] = (arr[i] - k);
		cout << arr[i] << endl;
		if(arr[i] > 0){
			cout << "Yes" << endl;
		}
		else{
			cout << "No" << endl;
		}
	}
	return 0;
}
	
	
