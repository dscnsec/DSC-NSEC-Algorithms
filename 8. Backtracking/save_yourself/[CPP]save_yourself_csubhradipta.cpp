/*
 * @file: [CPP]save_yourself_csubhradipta.cpp 
 * @brief: Print all palindromic substrings
 * @details:
 * Taking 3 strings, first, rest, current
 * SET first = substring (1st to ith char); rest = substring([i+1]th to nth char)
 * current will store the space-separated palindromic substring
 * If first is a palindrome, the function will be called recursively (rest will now act as main string)
 * first will be concatinated to current followed by a space
 * When the length of rest becomes zero, current will be printed
 * Space Complexity : O(n)
 * Time Complexity : O(2^n)
 * @author [Subhradipta Choudhury](https://github.com/csubhradipta)
 */

#include <bits/stdc++.h> 
using namespace std; 

bool isPalindrome( string str){             // Palindrome checking
    string rev = str;
    reverse(str.begin(), str.end());
    return (rev == str ? true : false);
}

void subString( string str, string curr){
    
    if( str.size() == 0){
        cout<<curr<<endl;                   // space separated palidromic substring
        return;
    }
    for (int i = 0; i < str.size(); i++){
        string first = str.substr(0, i+1);              // First part
        string rest = str.substr(i+1, str.size());      // Rest part
        if(isPalindrome(first))
            subString(rest, curr + " " + first);        // recursive call
    }
}

void solve(){
    string str;
    cin>>str;
    subString(str, "");
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