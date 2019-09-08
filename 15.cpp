#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int t,n;
	cin >> t;
	while(t--){
	cin >> n;
	
	int arr[1000000] = {0};
	arr[0] = 1;
	int len = 1;

	int q = 2; 
	while(q <= n){
		int num = 0;
		int x = 0;
		while(x < len){
			arr[x] = q*arr[x];
			arr[x] = arr[x] + num;
			num = arr[x]/10;
			arr[x] = arr[x] % 10;
			x++;	
		}
		while(num != 0){
			arr[len] = num%10;
			num = num/10;
			len++;
		}
		q++;
	}
	len--;
	while(len >= 0){
		cout << arr[len];
		len--;
	}

	cout << endl;
	}
	return 0;
}
		
