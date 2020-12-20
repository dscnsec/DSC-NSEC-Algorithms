/**
 * unique_characture_chalti.cpp
 * 
 * description :-
 * the trick is so simple of this question.we will be taking an vector, which includes the character from
 * A to z and it's number of occurance.
 * then we will start traversing from the first of the string, and put the number of occurence,like if 
 * the first no is a, then we will increase the no of occurence of a in that vector, then move to the next
 * character of the string and check it like before.
 * after that we will start traversing again and check if the value of any occurence is one or not, if it it then 
 * return its possition and break, if not then return -1.
 * 
 * Time complexity : O(n)
 * Space complexity :- O(n)
 * 
 * @author[chaltidutta](https://github.com/chaltidutta)
 * 
 * **/
#include <bits/stdc++.h>
using namespace std;

int nonrepC(string s , int n)
{
   //Your code here
//    int idx = -1;
    // int n = s.length();
    vector<int> freq(256, 0);
    for(int i = n-1 ; i >= 0 ; i--){
        freq[s[i]]++;
    }
    for(int i = 0 ; i < n ; i++){
        if(freq[s[i]] == 1)
            return i;
    }
    return -1;
   
}

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    cout<<nonrepC(s,n)<<endl;
}



int main(){
    int t;
    cin>>t;
    while(t-->0){
        solve();
    }
    return 0;
}
