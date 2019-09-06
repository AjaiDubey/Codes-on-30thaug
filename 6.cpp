#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,b,min,div,rem;
	cin >> a>> b;
	if((a >= 2) && (b == 1)){
		min = 0;
	}
	else if((a > b) && (b > 1)){
		min = 1;
	}
	else{
		div = b/a;
		rem = b%a;
		if(rem == 0){
			min = div + a;
		}
		else{
			min = div+1;
		}		
	}
	cout << min << endl;
	return 0;
}
	
