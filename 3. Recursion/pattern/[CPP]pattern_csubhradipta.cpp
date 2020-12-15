/*
 * @file: [CPP]pattern_csubhradipta.cpp 
 * @brief: Print pattern
 * @details: 
 * Call pattern(n), which prints from 1 to n
 * If n is not zero, then call pattern(n-1)
 * Else return
 * Space Complexity : O(1)
 * Time Complexity : O(n^2)
 * @author [Subhradipta Choudhury](https://github.com/csubhradipta)
 */

#include <bits/stdc++.h> 
using namespace std; 

void pattern(int);

void solve(){
    int n;
    cin>>n;
    pattern(n);
}

void pattern(int n)
{
    int i;
    if(n==0)
        return;
    else
    {   
        pattern(n-1);
        for(i=1; i<= n; i++)
            cout<<i<<" ";
        cout<<endl;
    }
}

int main() 
{   int t;
    cin>>t;
    while(t--){
        solve();
    } 
	return 0; 
} 