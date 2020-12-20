/**
 * push_zero_chalti.cpp
 * 
 * description :-
 * 
 * here, two pointer method is used.
 * initially the first and second pointer initialized at 0th possition, after that a loop is taken, upto when
 * the first pointer becames grater than the length of the array.
 * and each iteration of the loop it will be checking, if the value of first pointer is zero or not, 
 * if it is zero, then swap the value with second and increase the second pointer with one.
 * (here i have used swap stl function) and if it a[first pointer]
 * is not zero then increse the first pointer with one.
 * 
 * Time complexity : O(n)
 * Space complexity : O(n)
 * 
 *  @author[chaltidutta](https://github.com/chaltidutta)
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
    int firstP=0 , scndP=0;
    while(firstP<n){
        if(a[firstP] != 0){
            swap(a[firstP],a[scndP]);
            scndP++;
        }
        firstP++;
    }
    for(int i=0 ; i<n ; i++){
        cout<<a[i]<<" ";
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
input :-
2
5
1 0 2 0 3
6
0 5 6 9 0 3

output :-
1 2 3 0 0
5 6 9 3 0 0
*/