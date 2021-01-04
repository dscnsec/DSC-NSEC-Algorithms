/**
 * PushZero_reethikprasad.cpp
 * Remove all zeros from the array and add them to the end
 *
 * Description-

 * First take the number of test cases "t"
 * Then take the number as an array input with size n
 * Take a count = 0
 * Store numbers in an array a[n]
 * Move all the non-zero element to the left
 * fill the remaining place with zero
 * Print out the number from array
 * Time Complexity-O(n) Space Complexity-O(1)
 * @author [reethikprasad](https://github.com/reethikprasad)
 */

#include <bits/stdc++.h>
using namespace std;
int main() {
     int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int count=0;
        for(int i=0;i<n;i++){
            cin>>a[i];      
    }
    for(int i=0;i<n;i++){
        if(a[i]!=0){
            a[count++]=a[i];//all non-zero moved to the left
        }
    }
        while(count<n){ //filling the remaining elements with zeros
            a[count++]=0;
        }
    
    for(int i=0;i<n;i++){
            cout<<a[i]<<" ";      
    }
    cout<<endl;
}


return 0;
}

/*
input
2 
5 
1 0 2 0 3 
6 
0 5 6 9 0 3 

output
1 2 3 0 0 
5 6 9 3 0 
*/
