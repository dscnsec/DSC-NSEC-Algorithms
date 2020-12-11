/**
 * @file malfunctioning_keyboard_harikrishnan.cpp
 * @brief Given a string containing only alphabets, and we have to
 * find the alphabets that are certainly working correctly
 *
 * Description-
 * We can count the occurence of each letter in the string and those with odd number of   * occurences are working correctly for sure. A HashMap can be used for the same.
 * 
 * Time Complexity - O(n) Space Complexity - O(n)
 * Auxillary space needed - O(1)
 * @author [Harikrishnan6336](https://github.com/Harikrishnan6336)
 */

#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin>>s;
    unordered_map<char, int> cnt;
    
    for(unsigned long int i=0;i<s.size();i++)
    {
        if (cnt.find(s[i]) == cnt.end()) 
            cnt[s[i]] = 1;
            
        else
            cnt[s[i]]++;
    }
    
    for (auto itr = cnt.begin(); itr != cnt.end(); itr++) 
    { 
        if(itr->second % 2 == 1)
             cout << itr->first;
    } 
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

4
a
zzaaz
ccff
cbddbb

SAMPLE OUTPUT

a
z

cb

*/
