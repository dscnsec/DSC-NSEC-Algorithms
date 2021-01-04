/**
 * malfunctioning_keyword_chalti.cpp
 * 
 * Description :
 * 
 * here what have to do, we have to check which character is not repeating, and we have to print the 
 * chacacter alphabetically, which makes this question some difficult.
 * So, to solve this problem, first I have taken an array of size 26, and innitialized as false.
 * and check, if the next character os the string is same or not, if same then increase the iterator value by 
 * two, 
 * but if they are not same, then make the s[i]-a th value of the taken array as true. and
 * at the last, print the i th value which make as true
 * 
 * Time complexity : O(n)
 * Space complexity : O(n)
 * 
 *  @author[chaltidutta](https://github.com/chaltidutta)
 * **/

#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>>s;
    int malfuntaion[26]={false};
    int n=s.size();
    for(int i=0 ; i<n; ){
        if(s[i] == s[i+1]){
            i=i+2;
        }else{
            malfuntaion[s[i]-'a']=true;
            i=i+1;
        }
    }
    for(int i=0 ; i<26 ; i++){
        if(malfuntaion[i]){
            cout<<char (i+97);
        }
    }
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t-->0){
        solve();
    }
    return 0;
}