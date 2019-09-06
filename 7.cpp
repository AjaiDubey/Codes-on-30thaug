#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,b,ans,div,rmn;
	cin >> a >> b;
	if(a > b){
		if(b == 1){
			ans = 0;
		}
		else{
			ans = 1;
		}
		cout << ans << endl;
	}
	else if(a < b){
		div = b / a;
		rmn = b % a;
		if(rmn >= 1){
			ans = div + 1;
		}
		else{
			ans = div;
		}
		cout << ans << endl;
	}
	else{
		cout << "1" << endl;
	}
	return 0;
}	
