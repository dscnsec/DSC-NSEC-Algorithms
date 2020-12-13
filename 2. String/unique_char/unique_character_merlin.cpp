/**
 * unique_character_merlin.cpp
 * First character that is not repeating in the array
 *
 * Description-
 * Let us keep a counter array where we can store the indices of the characters
 * When a character is found for the first time (c[character]=0) we put the index value at the character location
 * If the character is found again, we subtract the current index calue from the current character value
 * Our answer will be the smallest positive value in the counter array
 *
 * Time Complexity-O(n) Space Complexity-O(n)
 * Note that in the space complexity, we are only using a fixed space of 26, which can be >n for a very small n
 *  However, if n is significantly large, the space complexity becomes ~O(1) in that case
 *
 * @author [merlin](https://github.com/m-e-r-l-i-n)
 */

#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(n==0) {cout<<"-1\n"; return;}     //can remove this line if n>0 fixed
    
    int i,c[26];
    memset(c,0,sizeof(c));
    for(i=0;i<n;i++)
    if(c[s[i]-'a']) c[s[i]-'a']-=(i+1);
    else c[s[i]-'a']=(i+1);
    
    int ans=n+1;
    for(i=0;i<26;i++)
    if(c[i]>0) ans=min(ans,c[i]-1);
    if(ans==n+1) ans=-1;
    cout<<ans<<"\n";
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
9
chocolate
6
papaya
 
output- 
1
4
*/
