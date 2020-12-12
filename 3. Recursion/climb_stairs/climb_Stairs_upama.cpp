/* climbStair_upama.cpp
*
* Description :- 
* At first as it is solved by recursion, so i have made a recursive function, named "recursiveSol" . base cases are if the value of n 
* is equal to zero and one, then it will return one, and if n is equal to two, then it will return two.

* After the base case it will call the recursive call for the values of n-1,n-2 and n-3 and return the sum of all three calls, 
* that means, it will return sum of(recursiveSol(n-1)+recursiveSol(n-2)+recursiveSol(n-3))

* then their is another function named solve, it will take input for the value of n, and then call the recursion function for n value, and print 
* the value of total possible climbing path, that means the ans.

* Time complexity-O(n) Space complexity-O(1)
* @author[chaltidutta](https://github.com/chaltidutta)
*/

#include<bits/stdc++.h>
using namespace std; 

int recursiveSol(int n){

    //base case for n==0,1,2
    if(n==1 || n==0){
        return 1;
    }
    else if(n==2){
        return 2;
    }
    else{
        //recursive call
        return recursiveSol(n-1)+recursiveSol(n-2);
    }

}

void solve(){
    int n; //number of floor
    cin>>n;
    cout<<recursiveSol(n)<<endl;
        
}

int main(){
    int t;
    cin>>t;
    while(t-->0){
        solve() ;
    }
}

/*
* input :-
* 1
* 2
* 1
* 4
* 5
* 
* output :-
* 2
* 1
* 5
* 8
*/
