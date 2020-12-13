/*
 * @file: [CPP] weird_sorting_csubhradipta.cpp 
 * @brief: Sort the given array within O(n) time and space complexity 
 * @details: 
 * COUNT occurrence of each elements
 * for 0 to (count7 - 1) SET nums[i] = 7
 * for count7 to (count14 - 1) SET nums[i] = 14
 * for count14 to (n-1) SET nums[i] = 21
 * Space Complexity : O(n)
 * Time Complexity : O(n)
 * @author [Subhradipta Choudhury](https://github.com/csubhradipta)
 */

#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;
	int nums[n];
	int count7 = 0, count14 = 0, count21;
	for (int i = 0; i < n; i++){
	    cin>>nums[i];
	    if( nums[i] == 7)
	        count7++;
	    else if ( nums[i] == 14)
	        count14++;
	}
	count21 = n-(count7 + count14);
	
	for (int i = 0; i < n; i++){
		if(count21 != 0){
			if(count14 != 0){
				if(count7 != 0){
					nums[i] = 7;
					count7--;
				} else {
					nums[i] = 14;
					count14--;
				}
			} else {
				nums[i] = 21;
				count21--;
			}
		}
		cout<<nums[i]<<" ";
	}
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