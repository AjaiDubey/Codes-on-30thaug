#include<bits/stdc++.h>
using namespace std;

int main(){
	string s1,s2;
	cin >> s1 >> s2;
	int num = 0;
	for (int i =0; i < 3; i++){
		if(s1[i] == s2[i]){
			num++;
		}
	}
	cout << num << endl;
	return 0;
}
