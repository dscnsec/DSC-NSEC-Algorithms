/**
 * @file save_yourself_harikrishnan.cpp
 * @brief Given a word S and we have to partition the string into substrings, such that all the substrings are palindrome.
 *
 * Description -  We need to check the possiblities of the string being partitoned into     substrings which are all palindrome.   
 *  We can use backtracking for the same and requires a helper function to check if a string is a palindrome or not.
 * We can traverse the string from the 0th index and search for a palindrome, and if we find one, we can store it in a vector and start a search for the next palindrome string. 
 *
 *  Each time we add subtract an element from the 'X' value 
 * Time Complexity - O(n*2^n) Space Complexity - O(n)
 * @author [Harikrishnan6336](https://github.com/Harikrishnan6336)
 **/

#include<bits/stdc++.h>
using namespace std;

// Helper function to check if a string is palindrome or not.
bool isPalindrome(string s,long unsigned int n) 
{
    for(long unsigned int i=0;i<n/2 ;i++) 
        if(s[i] != s[n-i-1])
            return false;
    return true;
}


void backtrack(string s,vector<string> &ans, long unsigned int index) 
{
    if(index==s.size() && ans.size()>0)
    {
        // If the traversal has reached the end index and the 'ans' vector contains atleast one palindrome substring.
        for(long unsigned int k =0 ;k<ans.size();k++)
        {
            cout<<ans[k]<<" ";
        }
        cout<<"\n";
        return;
    }
    string tmpstr;
    
    // Begin the traversal from the start index, as the elements before it(if any) has been identified as palindrome and is stored in ans.
    for(long unsigned int i = index;i < s.size(); i++) 
    {
        tmpstr += s[i];
        // Include it in the answer vector, if it is a palindrome
        if(isPalindrome(tmpstr,tmpstr.size())) 
        {
            ans.push_back(tmpstr);
    // Backtrack and find all combinations of palindrome substring, including the palindrome string 'tmpstr'
            backtrack(s,ans,i+1); 
        // Remove the last string
            ans.pop_back();
        }
    }
}

 
void solve()
{
    string s;
    cin>>s;                 // Input the string
    vector<string> ans;    // A vector to store all the palindrome substrings of the string
    backtrack(s,ans,0);
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
aab
nitin
racecar

SAMPLE OUTPUT

a a b 
aa b 
n i t i n 
n iti n 
nitin 
r a c e c a r 
r a cec a r 
r aceca r 
racecar 

*/
