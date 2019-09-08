#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int> v;
	int n;
	for(int i =0; i <10; i++){
		cin >> n;
		v.push_back(n);
	}
	for(int i = 0; i < v.size(); i++){
		if((i % 2) != 0){
			v.erase(v.begin() + i);
		}
	}
	for (int i =0; i < v.size(); i++){
		cout << v[i]<<endl;
	}
	
	return 0;
}	
