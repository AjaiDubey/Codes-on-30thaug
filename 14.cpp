#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n,quo,sum;
	cin >> t;
	while(t--){
		int sum = 0;
		cin >> n;
		quo = n/5;
		sum += quo;
		while(quo != 0){
			quo = quo/5;
			sum += quo;
		}
		cout << sum << endl;
	}
	return 0;
}
		
			
