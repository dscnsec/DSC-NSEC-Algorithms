/**
 * malfunctioning_keyboard_merlin.cpp
 * First character that is not repeating in the array
 *
 * Description-
 * Consider the 1st character of the string as c
 * Take count as 1
 * As long as current character of string is c increment count
 * If count is odd, then it works just fine, else it is faulty
 * When there is a character change, make c as the current character and set l to 1
 * Time Complexity-O(n)
 * Space Complexity-O(x) x=26
 *
 * @author [merlin](https://github.com/m-e-r-l-i-n)
 */

#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin>>s;
    if(s.length()==0) {cout<<"\n"; return;}     //can remove this line if n>0 fixed
    bool c[26];
    memset(c,false,sizeof(c));

    int i,n=s.length(),cur=s[0],l=1;    //initialize cur as 1st character, len as 1
    for(i=1;i<n;i++)
    if(s[i]==cur) l++;  //as long as s[i]==cur we increment len
    else
    {
        if(l%2) c[cur-'a']=true;    //if len is odd, it means that this key is working properly
        l=1;
        cur=s[i];
    }
    if(l%2) c[cur-'a']=true;    //this is necessary for the final character in string

    string ans="";
    for(i=0;i<26;i++)
        if(c[i]) ans+=(char)('a'+i);
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
5
zzaaz
zzaazz
a
cbddbb
aaaaa
output-
z
a
bc
a
*/
