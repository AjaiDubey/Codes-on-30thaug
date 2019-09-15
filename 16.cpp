#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;
	int flag = 0;
	for(int i =0; i < s.size(); i++){
		if((i+1)%2 == 0){
			if(s[i] == 'R'){
				flag++;
				break;
			}
		}
		else{
			if(s[i] == 'L'){
				flag++;
				break;
			}
		}
	}
	if(flag > 0){
		cout << "No" << endl;
	}
	else{
		cout << "Yes" << endl;
	}
	return 0;
} 
