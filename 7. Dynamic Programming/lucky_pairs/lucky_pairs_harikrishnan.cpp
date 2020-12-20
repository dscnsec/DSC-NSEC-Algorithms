/**
 * @file lucky_pairs_harikrishnan.cpp
 * @brief Here we need to check if length of the common subsequence between the 2 is 
 *  greater than or equal to half the length of the larger string between the pair.
 *
 * Description - We can first compute half the length of the larger string. 
 *  Then we can find the lowest common subsequence of the given strings using Dynamic Programming.
 *
 *
 * Time Complexity - O(n^2) Space Complexity - O(n^2)
 * @author [Harikrishnan6336](https://github.com/Harikrishnan6336)
 **/

#include<bits/stdc++.h>
using namespace std;

 
void solve()
{
        string s1,s2;
        // Input the two given strings
        cin>>s1>>s2;
        // Compute its sizes
        int n1 = s1.size(),n2 = s2.size();
        int dp[n1+1][n2+1];
        
        // Find half the length of the larger string between the pair.
        int len = (max(n1, n2)+1)/2;
        
        // Construct the dp table in a Bottom Up(Tabulation) manner.
        //Here dp[i][j] contains the lcs of s1[0..i] and s2[0..j] pair of strings 
        for(int i=0;i<=n1;i++)
        {
            for(int j=0;j<=n2;j++)
            {
                if(i==0 || j==0)  //When the size of one of the string is zero, lcs is 0
                    dp[i][j] = 0;
    // When the last element of both string is equal, lcs is the lcs of the pair of strings excluding last element from both
                else if(s1[i-1] == s2[j-1]) 
                    dp[i][j] = dp[i-1][j-1] + 1;
       // Else take the maximum of the lcs when the last element in either of the string is excluded
                else
                    dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
            }
        }
        
        if(dp[n1][n2] >= len)
           cout<<"YES";
        else
            cout<<"NO";
        cout<<endl;
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

2
abcde ace
abcde afgh

SAMPLE OUTPUT

YES
NO

*/
