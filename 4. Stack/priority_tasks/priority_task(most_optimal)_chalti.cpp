/**
 * priority_task(most_optimal)_chalti.cpp
 * 
 * Descriptiom :-
 * 
 * To solve this problem, we will be taking an temp vector to store the grater value, to find the grater value, 
 * we will do :-
 * As this is a circular type array, so we will consider the input array its double size, the first half will be its own value, and the 
 * other half, their will be the repitation of the first half elements.
 * we will be taking an stack to make our finding process easy
 * now to find the grater element, we will traverse the stack(N+N length) for each element of
 * the array and pop each element of the stack,ckaek if the element is grater or not, if the found element 
 * is grater than the comparing element, then push it into the vector.
 * After that push the element into the stack. 
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
    int arr[n+n];
    for(int i=0 ; i<n ; i++){
        cin>>arr[i]; //taking inp upto nth term
        arr[n+i]=arr[i]; //rest half, repeatation
    }
    stack<int> stk;
    vector<int> temp(n+n);
    for(int i=0 ; i<(n+n) ; i++){
        temp[i]=-1; //declearing all the elements as -1
    }
    for(int i=0 ; i<(n+n) ; i++){
        while(!stk.empty() && arr[i]>arr[stk.top()]){ //ckecking
            temp[stk.top()]=arr[i]; //push the value of the arr into the vector
            stk.pop(); 
        }
        stk.push(i); //lastly push the element
    }
    for(int i=0 ; i<n ; i++){
        cout<<temp[i]<<" "; //print the vector
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

