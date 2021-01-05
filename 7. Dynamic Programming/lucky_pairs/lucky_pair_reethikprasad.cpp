
/*
 * Description
 * lucky_pair_reethikprasad.cpp

 * Find half the length of the larger string between the pair.
 * Construct the dp table in a Bottom Up(Tabulation) manner.
 * Here dp[i][j] contains the lcs of s1[0..i] and s2[0..j] pair of strings 
 * When the size of one of the string is zero, lcs is 0
 * When the last element of both string is equal, lcs is the lcs of the pair of strings excluding last element from both
 * Else take the maximum of the lcs when the last element in either of the string is excluded
 * Time Complexity - O(n^2) Space Complexity - O(n^2)
 * @author [reethikprasad](https://github.com/reethikprasad)

*/
#include<bits/stdc++.h>
using namespace std;

 
void solve()
{
        string s1,s2;
        cin>>s1>>s2;
        int n1 = s1.size(),n2 = s2.size();
        int len = (max(n1, n2)+1)/2;
        int all[n1+1][n2+1];   
        
        for(int i=0;i<=n1;i++)
        {
            for(int j=0;j<=n2;j++)
            {
                if(i==0 || j==0)  
                    all[i][j] = 0;
                else if(s1[i-1] == s2[j-1]) 
                    all[i][j] = all[i-1][j-1] + 1;
                else
                    all[i][j] = max(all[i][j-1], all[i-1][j]);
            }
        }
        
        if(all[n1][n2] >= len)
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