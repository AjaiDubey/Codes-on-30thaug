#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;    
   long long int arr[n],arr1[n],arr2[n];
    
    for(int i =0; i<n; i++){
        cin >> arr[i];
    }
	arr1[0] = arr[0];
    for(int i = 1; i < n; i++){
        arr1[i] = arr[i] + arr1[i-1];
    }
    for(int i =0; i < n-2; i++){
        int gap = n - i;
	int rmndr = gap % 3;
	if(i > 0){
		if(rmndr == 0){
			arr2[i] = arr1[n-1] - arr1[i-1];
		}
		else if(rmndr == 1){
			arr2[i] = arr1[n-2] - arr1[i-1];
		}
		else{
			arr2[i] = arr1[n-3] - arr1[i-1];
		}		
	}
	else{
		if(rmndr == 0){
                        arr2[0] = arr1[n-1];
                }
                else if(rmndr == 1){
                        arr2[0] = arr1[n-2];
                }
                else{
                        arr2[0] = arr1[n-3];
                }
	
	}
    }
    arr2[n-2] = arr[n-2];
	arr2[n-1] = arr[n-1];
    sort(arr2, arr2 + n);
    cout << arr2[n-1] << endl;
    return 0;
}
