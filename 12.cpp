#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;
cin >> n;

int arr1[n],arr2[n],arr3[n];

for (int i = 1; i <=n; i++){
	cin >> arr1[i];
}
for (int i = 1; i <=n; i++){
	cin >> arr2[i];
}
for(int i =1; i <= n-1; i++){
	cin >> arr3[i];
}
int sum = 0;
for(int i =1; i <= n; i++){
	int val = arr1[i];
	sum = sum + arr2[val];
	if(i <= n-1){
		if((arr1[i + 1] - arr1[i]) == 1){
			sum = sum + arr3[val];
		}
	}
}
cout << sum << endl;
return 0;
}
