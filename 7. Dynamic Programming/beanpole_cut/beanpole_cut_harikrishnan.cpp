/**
 * @file beanpole_cut_harikrishnan.cpp
 * @brief Here we need to find the maximum number of coins obtainable by cutting the beanpole.
 *
 * Description - We can use dynamic programming. Store the values in dp array such that dp[i] contains the
 *  maximum coins that can be made from a beanpole of length 'i'. The following formula is used:
 *  dp[i] = max(dp[i],P[j] + dp[i-j-1]) for j = 0 to j < i
 *
 * Time Complexity - O(n^2) Space Complexity - O(n)
 * @author [Harikrishnan6336](https://github.com/Harikrishnan6336)
 **/

#include<bits/stdc++.h>
using namespace std;
 
void solve()
{
        int n;
        cin>>n; 
        int P[n]; // stores coins offered for a pole of length i.
        
        for(int i=0;i<n;i++)
        {
            cin>>P[i];
        }
        
        // initialize the DP array with -1.
        vector<int> dp(n+1,-1);
        dp[0] = 0;
        
        // Fill the values in the dp array in bottom-up manner.
        for(int i=1;i<=n;i++)
        {
            for(int j=0;j<i;j++)
            {
                dp[i] = max(dp[i],P[j]+dp[i-j-1]);
            }
        }
        //Print the maximum coins obtained for cutting a rod of length n.
        cout<<dp[n]<<endl;
        
    return;
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

SAMPLE INPUT

3
8
1 5 8 9 10 17 17 20
5
2 3 7 8 10
0

SAMPLE OUTPUT

22
11
0

*/
