/**
 * lucky_pairs_merlin.cpp
 * Find longest common subsequence in two strings
 *
 * Description-
 * Lets find longest common subsequence of two strings first
 * In order to find longest common subsequence, we need to form a 2D dp array
 * Any cell dp[i][j] denotes the longest common subsequence that can be formed using the 1st i letters of string 1 and 1st j letters of string 2
 * the value at any cell dp[i][j] can be calculated using the formula
 *  dp[i][j]=dp[i-1][j-1]+1 if a[i] and b[j] are equal
 *  dp[i][j]=max(dp[i-1][j],dp[i][j-1]) if the two indices are not equal,
 *      this is because we are choosing the maximum value that can be obtained from the previous indices of i and j respectively
 * After we have found the lcs, we need to know if the lcs is > or equal to 1/2 the length of the larger string
 *
 * Time Complexity-O(n*m) where n and m are lengths of string 1 and string 2 respectively
 * Space Complexity-O(n*m)
 *
 * @author [merlin](https://github.com/m-e-r-l-i-n)
 */

#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string a,b;
    cin>>a>>b;
    int n=a.length(),m=b.length(),i,j;
    int dp[n+1][m+1];
    dp[0][0]=0;
    for(i=0;i<=n;i++)
    for(j=0;j<=m;j++)
    {
        if(i==0 || j==0)    //base case where we can have no lcs if 1 string's size is 0
            dp[i][j]=0;
        else if(a[i-1]==b[j-1])     //if they are equal, we can just add 1 to the previous value
            dp[i][j]=dp[i-1][j-1]+1;
        else
            dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
    }
    int v=(max(n,m)+1)/2;   //need the +1 for cases where max is odd
    if(dp[n][m]>=v) cout<<"YES";
    else cout<<"NO";
    cout<<"\n";
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
2
abcde ace
abcde afgh

output-
YES
NO
*/
