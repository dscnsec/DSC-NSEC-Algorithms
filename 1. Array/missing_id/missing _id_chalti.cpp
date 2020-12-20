/**
 * missing_id_chalti.cpp
 * 
 * Description :-
 * its a little bit tricky mathematics based question rathar than dsa based.
 * Here the if the number is grater than 2 then the ans will be ceil of (n-2)/x+1 ;
 * but if n is less equal 2 then the ans will be 1;
 * 
 * lets say for example, 7 and 3. n=7 and x=3.
 * stack1 contains 1,2 
 *  stack2 contains 3,4,5 
 *  stack3 contains 6,7,8.  So answer would be 3.
 * so here the ans (n-2)/x will be 1.66 and ceil(1.66) = 2after adding 1 it will be 3.
 * 
 * time complexity;- O(n) , space complexity:-O(n)
 * @author[chaltidutta](https://github.com/chaltidutta)
 * **/

#include <bits/stdc++.h>
using namespace std;

void solve(){

    int n,x;
    int ans;
    cin>>n>>x;
    if(n>2){
        ans=ceil(double(n-2)/x)+1;
    }
    else{
        ans=1;
    }
    cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t-->0){
        solve();
    }
    return 0;
}

/*
Example Input :-
4
7 3
1 5
22 5
987 13

Example Output :-
3
1
5
77
*/