/*
 * Description
 * pattern_reethikprasad.cpp
 * We have to print the pattern using recursion
 * First take the number of test cases "t"
 * Then take the number as  n
 * Run a for loop starting from 1 and decreasing the row
 * Time complexity-O(n^2) Space Complexity-O(1)
 * @author [reethikprasad](https://github.com/reethikprasad)
 * 
 * **/

#include <bits/stdc++.h>
using namespace std;

void solve(int i,int n){
    for(int j=1;j<=i;j++){
        cout<<j<<" ";
    }
    cout<<endl;
        if(i<n){
            solve(i+1,n);
        }
    }

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        solve(1,n);
    }
    return 0;
}


