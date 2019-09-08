#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr1[n-1],arr2[n];

	for (int i =0; i < n-1; i++){
		cin >> arr1[i];
	}
	if(arr1[0] > arr1[1]){
		arr2[0] = arr1[0];
		for(int i = 1; i < n-1; i++){
                if(arr1[i-1] <= arr1[i]){
                        arr2[i] = arr1[i-1];
                }
                else{
                        arr2[i] = arr1[i];
                }
        	}
	}
	else{
	arr2[0] = arr1[0];
	arr2[1] = arr1[0];
	
	for(int i = 2; i < n-1; i++){
		if(arr1[i-1] <= arr1[i]){
			arr2[i] = arr1[i-1];
		}
		else{
			arr2[i] = arr1[i];
		}
	}
	}
	arr2[n-1] = arr1[n-2];
	int sum = 0;
	for(int i = 0; i < n; i++){
		sum += arr2[i];
	}
	cout << sum << endl;
	return 0;
}
	
