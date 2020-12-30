/**
 * priority_task(bruteforce)_chalti.cpp
 * 
 * Descriptiom :-
 * 
 * In this method, we are taking two for loop, and check for finding the grater element, if it found, then break the loop
 * and print the value, if there is no grater element, then, prints -1, which is the innitial value of the 
 * temp variable.
 * 
 * Time complexity : O(n^2)
 * Space complexity : O(n)
 * 
 *  @author[chaltidutta](https://github.com/chaltidutta)
 * **/

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int arr[n+n];
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
        arr[n+i]=arr[i];
    }
    // int temp = -1;
    for(int i=0 ; i<n ; i++){
        int temp = -1;
        for(int j=i+1 ; j<(n+n) ; j++){
            if(arr[i] < arr[j]){
                temp=arr[j];
                break;
            }
        }
        cout<<temp<<" ";
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

/*
Sample Input :-
3
3
1 2 1
4
1 2 3 4
5
4 5 3 5 7
Sample Output :-
2 -1 2
2 3 4 -1
5 7 5 7 -1
*/