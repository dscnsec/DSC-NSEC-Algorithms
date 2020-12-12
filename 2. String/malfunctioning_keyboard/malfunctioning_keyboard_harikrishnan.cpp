/**
 * @file malfunctioning_keyboard_harikrishnan.cpp
 * @brief Given a string containing only alphabets, and we have to
 * find the alphabets that are certainly working correctly
 *
 * Description- Every character that cannot be paired with a same letter to its 
 *   left or right neighbours as itself would be functioning correctly.
 *  Note: A letter can be paired only once
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
        int n=s.length(),i=0;
        
        bool flag[26]={false}; // Bool array to mark the correctly working letters.
        while(i<n)
        {
            if(s[i]==s[i+1])  //If current and its next letters are same, go to the next's next letter
            {
                i+=2;
            }
            else
            {
                flag[s[i]-'a'] = true; // Found a letter thats working correctly.
                i++;
            }
        }
        //Print those letters that are certainly functioning correct.
        for(int i=0;i<26;i++)
        {
            if(flag[i])
            {
                cout<<char(i+97);
            }
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

bc

*/
