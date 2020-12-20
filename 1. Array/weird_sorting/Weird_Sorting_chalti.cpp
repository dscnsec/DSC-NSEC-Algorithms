/**
 * wired_sorting_chalti.cpp
 * 
 * description:-
 * 
 * 
 * the main concept is here using three pointer, we will swap the values in a process,like in the middle 
 * their will be 14,so we will do nothing if we found 14,  but if qwe found 7 or 21, then we will shift it 
 * left and right of 14 accordenately.
 * 
 * 
 * three pointer has been taken, one is high second is middle and last one is low, low and middle initially
 * indicates o th possiton, and high indicates the last possition, and here we will take a loop while 
 * middle<=high , and we will check if a of middle possition is 7 or not, if it is, then we will
 * swap the low and middle value, and increase low and middle with one. 
 * again check for 21 value, with the same process.
 * 
 * Time Complexity :- O(N)
 * Space Complesity :- O(N)
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
     int low = 0;
    int middle = 0;
    int high = n-1;
    while(middle<=high){
        if(a[middle]==7){
            swap(a[middle],a[low]);
            low=low+1;
            middle++;
        }
        
        else if(a[middle]==21){
            swap(a[middle],a[high]);
            high--;
        }
        else{
            middle++;
        }
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