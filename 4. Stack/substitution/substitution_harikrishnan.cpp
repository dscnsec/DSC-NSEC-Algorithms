/**
 * @file substitution_harikrishnan.cpp
 * @brief Here we need to find if the given string fulfills the given condition
 *
 * Description - We can use a stack to store the character we encounter while traversing
 *  the given string and check if they form 'abc', by checking that a 'c' is always 
 *  preceeded by 'ab'. 
 * Whenever we encounter a 'c' we make sure that its preceeded by 'b' and then'a' and then pop the stack twice.
 * If we encounter 'a' or 'b' we simply push it into the stack.
 * Time Complexity - O(n) Space Complexity - O(n)
 * @author [Harikrishnan6336](https://github.com/Harikrishnan6336)
 **/

#include<bits/stdc++.h>
using namespace std;


void solve()
{
        string s;
        cin>>s;
        // To break from the loop when the condition fails
        bool flag = true;
        stack<char> st;
        
        for(unsigned long int i=0;i<s.size() && flag;i++)
        {
            //If its 'c' then check if its preceded by 'b' and then 'a'
            if(s[i] == 'c')
            {
                if(st.size() < 2 || st.top() != 'b')
                { 
                    flag = false; 
                    break;
                }
                st.pop();
                if(st.size() < 1 || st.top() != 'a')
                {
                    flag = false; 
                    break;
                }
                st.pop();
            }
            // If we encounter 'a' or 'b'   
            else
            {
                st.push(s[i]);
            }
        }
        if(st.size() == 0  && flag)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
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
aabcbc
abcabcababcc
abccba

SAMPLE OUTPUT

YES
YES
NO

*/
