/**
 * beanpole_cut_merlin.cpp
 * Maximum number of coins that can be obtained by cutting the beanpole in an optimal way
 *
 * Description-
 * Let us consider that the beanpole is of length n
 * For any positon i that we cut in the the beanpole, the maximum number of coins we can obtain will be 
 *  maximum coins we can get to split the beanpole at any point j where 0<j<i and max coins obtained at any point is coins[j]+dp[i-j-1]  
 * Thus we can either use recursion+memoization of a simple 2D dp to store all values of max obtainable, and our answer will be dp[n]
 *
 * Time Complexity-O(n*n) Space Complexity-O(n)
 *
 * @author [merlin](https://github.com/m-e-r-l-i-n)
 */

#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int i,cost[n];
    for(i=0;i<n;i++)
        cin>>cost[i];
    int dp[n+1],j;
    dp[0]=0;
    for(i=1;i<=n;i++)
    {
        dp[i]=0;    //intialize to 0
        for(j=0;j<i;j++)
        dp[i]=max(dp[i],dp[i-j-1]+cost[j]);     //maximum coins possible for i 
    }
    cout<<dp[n]<<"\n";
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}

/*
input-
1
8
1 5 8 9 10 17 17 20

output-
22
*/
