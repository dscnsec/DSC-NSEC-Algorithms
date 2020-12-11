/*
 * @file: 5%_mean_csubhradipta.cpp 
 * @brief: Mean of integers after removing the smallest 5% and largest 5% of the elements
 * @details: 
 * SORT the array
 * CALCULATE fivePercent = 5% of the size of array (n)
 * SUM up the elements from index [fivePercent] to [(n - 1) - fivePercent]
 * Find MEAN = SUM / (n - 2*fivePercent)
 * Space Complexity :   O(n)
 *  Time Complexity :	O(nlogn)
 * @author [Subhradipta Choudhury](https://github.com/csubhradipta)
 */

#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;
	int nums[n];
	for (int i = 0; i < n; i++)
		cin>>nums[i];
	sort(nums, nums+n); 
	int fivePercent = n/20;
	float sum=0;
	for (int i = 0; i < n; i++)
		if (i >= fivePercent && i < (n - fivePercent))    // skipping the first 5% & last 5% elements
			sum += nums[i];
	float mean = sum/(n-2*fivePercent);		// mean of the rest of elements
	cout<<fixed<<setprecision(5)<<mean<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}