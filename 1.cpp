#include <bits/stdc++.h>

using namespace std;

int main(){
    int T,n;
    cin >> T;
    while(T--){
        cin >> n;
        int flag = 0;
        while(n >= 0){
            
            if(n % 2 == 0){
                n /= 2;
                if(n == 1){
                    flag = 1;
                    break;
                }
            }
            else{
                n = (3*n) + 1;
            }
        }
        if (flag == 1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
