#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t,m,n;
	cin >> t;
	while(t--){
		vector<int> v;
		cin >> m >> n;
	
		for(int i = m; i <= n ; i++){
			int flag = 0;
			if(i == 1){
				continue;
			}
			else{
			for(int j = 2; j <= sqrt(i); j++){
				if(i % j == 0){
					flag++;
					break;
				}
			}
			if((flag == 0) || (i == 2)){
				v.push_back(i);
			}
			}
		}
	
		for(int i = 0; i < v.size(); i++){
			cout << v[i] << endl;
		}
		v.clear();
	}
	return 0;
}	
			
