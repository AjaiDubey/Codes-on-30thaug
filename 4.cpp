#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	int q1,q2,q3,w1,w2,w3;
	int arr[3],arr1[3];
	while(t--){
	for(int i = 0; i < 3; i++){
		cin >> arr[i];
	}
	for(int i = 0; i < 3; i++){
		cin >> arr1[i];
	}
	int max = arr[0];
	int q1 = 0;
	for(int i=1; i < 3; i++){
		if(arr[i] > max){
			max = arr[i];
			q1 = i;
		}
	}
	int min = arr[2];
	int q3 = 2;
	for(int i = 1; i >= 0; i++){
		if(arr[i] < min){
			min = arr[i];
			q3 = i;
		}
	}
	int beech = 3 - (q3 + q1);
	int beech_num = arr[beech];
	
	int max1 = arr1[0];
        int w1 = 0;
        for(int i=1; i < 3; i++){
                if(arr1[i] > max){
                        max1 = arr1[i];
                        w1 = i;
                }
        }
        int min1 = arr1[2];
        int w3 = 2;
        for(int i = 1; i >= 0; i++){
                if(arr1[i] < min1){
                        min1 = arr1[i];
                        q3 = i;
                }
        }
        int beech1 = 3 - (q3 + q1);
        int beech1_num = arr[beech1];
	if((q1 == w1) && (q2 == w2) && (q3 == w3)){
		cout << "FAIR"<< endl;
	}
	else{
		cout << "NOT FAIR" << endl;
	}
	}
	return 0;
}
	
	
