/*
 * @file: [CPP]case_game_csubhradipta.cpp 
 * @brief: Print all combinations of string formed after transforming every character to lowercase and uppercase case
 * @details:
 * Taking 2 strings -  original(org) & current(curr)
 * While traversing the org string, If any digit is found, it directly appends to cuur string
 * Else two calls will be made to transform the rest part, one for uppercase & another for lowercase 
 * When the length of original and current string becomes equal, current will be printed
 * Space Complexity : O(n)
 * Time Complexity : O(2^n)
 * @author [Subhradipta Choudhury](https://github.com/csubhradipta)
 */

#include <bits/stdc++.h> 
using namespace std; 

void transform(string org, string curr, int i){
    if(curr.size() == org.size()){         // print the current string when length of original string and current string becomes equal
        cout<<curr<<endl;
        return;
    }
    
    if(isdigit(org[i]))
        transform(org, curr + org[i], i+1);         // append digit without any transformation
        
    else {
        transform(org, curr + char( tolower(org[i]) ), i+1);    // transform character to lowercase and then append
        transform(org, curr + char( toupper(org[i]) ), i+1);    // transform character to uppercase and then append
    }
    return;
}

void solve(){
    string str;
    cin>>str;
    transform(str, "", 0);
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