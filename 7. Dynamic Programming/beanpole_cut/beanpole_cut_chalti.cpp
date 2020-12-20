/**
 * missing_id_chalti.cpp
 * 
 * Description :-
 * its acctually the Memoized-Rod-Cutting problem
 * The approch is Top-down with memoization(its memoization not memorization) In this approch we write the procedure 
 * recursively in a natural manner, but modified to save the result of sub-problem.usually in an array or hash table.
 * The producdure now fast checks to see wheater it has previously solved this sub-problem if so it returns the saved value
 * saving a furthur computation at this level, if not the procedure computes the value in the usual manner.We say that
 * the recursive procedure has been memoized it "remembers" what results it has computed previously.
 * 
 * time complexity;- O(n^2) , space complexity:-O(n)
 * @author[chaltidutta](https://github.com/chaltidutta)
 * **/

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }
    int result[n+1]={0};
    if(n==0){
        cout<<"0"<<endl;
    }
    else{
        for(int i=1 ; i<n+1 ; i++){
            for(int j=0 ; j<i ; j++){
                result[i]=max(result[i] , result[i-j-1]+a[j]);
            }
        }
    }
    sort(result,result+n+1);
    cout<<result[n]<<endl;
}

int main(){
    int t;
    cin>>t;
    while (t-->0)
    {
        /* code */
        solve();
    }
    return 0;
    
}

/*
Example Input
2
8
1 5 8 9 10 17 17 20
6
4 8 8 9 10 12

Example Output
22
24
*/
