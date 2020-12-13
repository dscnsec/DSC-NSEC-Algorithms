/*
 * @file: [CPP] push_zero_csubhradipta.cpp 
 * @brief: Keep non zero elements in front and zeroes at back
 * @details: 
 * If an element is equals to 0, then shift the elements after it by [-1]
 * And push the 0 at back
 * Space Complexity : O(n)
 * Time Complexity : O(n^2)
 * @author [Subhradipta Choudhury](https://github.com/csubhradipta)
 */

#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;
	int nums[n],j;
	for (int i = 0; i < n; i++){
		cin>>nums[i]; 
	}
	for (int i = 0; i < n; i++){
		if (nums[i] == 0){
			j = i;	
			while( j != n){
				nums[j] = nums[j+1];	// shifting elements left by 1 index
				j++;
			}
			nums[n-1] = 0;		// pushing back 0
		}	
	}

	for (int i = 0; i < n; i++)
		cout<<nums[i]<<" ";
	
	cout<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}