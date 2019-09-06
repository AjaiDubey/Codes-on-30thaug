 #include<bits/stdc++.h>

using namespace std;

int main(){
	long long int t,a,b,c,d,e,semi,cnt;
	cin >> t;
	while(t--){
		long long int cnt = 0;
		cin >> a >> b >> c;
		semi = c / 2;
		if(c % 2 == 0){
			for(long long int i = semi; i <= c; i++){
				d = a + i;
				e = b + c - i;
				if(d > e){
					cnt++;
				}
			}
		}
		else{
			for(long long int i = semi+1; i <= c; i++){
                                d = a + i;   
                                e = b + c - i;
                                if(d > e){
                                        cnt++;
                                }
                        }
		}
		cout << cnt << endl;
		
	}
	return 0;
}
	

			 	
