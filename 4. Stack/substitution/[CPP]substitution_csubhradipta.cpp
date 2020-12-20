/*
 * @file: [CPP]substitution_csubhradipta.cpp 
 * @brief: Find task with the next greater priority number
 * @details: 
 * If stack is empty, one character is pushed from the front of given string
 * Else one store the stack[top] to a variable and pop it from the stack,
 * and then check if string[i], character & stack[top] are 'c','b' & 'a' respectively or not
 * If so, pop the stack[top] element
 * Else push back the variable and string[i] to the stack
 * If stack becomes empty, then print "YES"
 * Else "NO"
 * Space Complexity : O(n)
 * Time Complexity : O(n)
 * @author [Subhradipta Choudhury](https://github.com/csubhradipta)
 */

#include <bits/stdc++.h> 
using namespace std; 

void solve(){
    string str;
    cin>>str;
    
    stack<char> pswd;
    char ch;

    for (int i = 0; i < str.size(); i++)
    {
        if (pswd.empty())
            pswd.push(str[i]);  // push one character is stack is empty

        else {
            ch = pswd.top();    // holding the top character of stack
            pswd.pop();

            if ((!pswd.empty()) && (str[i] == 'c') && (ch == 'b') && (pswd.top() == 'a'))       // if  found "abc" pattern
                pswd.pop();
            
            else {
                pswd.push(ch);          // push the character back to stack
                pswd.push(str[i]);      // push another character from string
            }
        }
    }

    string check = pswd.empty() ? "YES" : "NO";
    cout<<check<<endl;
    
}

int main() 
{ 
    int t;
    cin>>t;
    while(t--){
        solve();
    } 
    return 0; 
} 