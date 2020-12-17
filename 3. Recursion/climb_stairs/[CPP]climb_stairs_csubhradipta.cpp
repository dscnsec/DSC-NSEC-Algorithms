/*
 * @file: [CPP]climb_stairs_csubhradipta.cpp 
 * @brief: Find number of ways to climb second floor
 * @details: 
 * Call stairWays(n)
 * If n = 1 or n = 2, then return n
 * else return stairWays(n-1) + stairWays(n-2)
 * Space Complexity : O(1)
 * Time Complexity : O(2^n)
 * @author [Subhradipta Choudhury](https://github.com/csubhradipta)
 */

#include <bits/stdc++.h>
using namespace std;

int stairWays(int);

void solve(){
	int stairs, ways;
	cin>>stairs;
	ways = stairWays(stairs);
	cout<<ways<<endl;
}

int stairWays(int x){
	if (x == 1 || x == 2)
		return x;
	else
		return stairWays(x-1) + stairWays(x-2);		// recursion for more than two stairs
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}