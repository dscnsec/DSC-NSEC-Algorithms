/*
* find_min_upama.cpp
* 
* Description :- 
* the intution behind the algorithm is to find the  sum of the number of  subarrays multiplie minimum element of that subarray.
* so to find the total number of subarrays we need to find out the larger 
* element in left of i th value of the array and larger value in right of i th value of the array. 

* after that make two arrays which will contain the right larger elements and left larger elements such that left[i]+1 = the number of subarrays ending with A[i] and A[i] is * * only single minimum, similarly for the right array.

* then at last, find the and by multiplying the all i * th value of right array and left array element.
* Time Complexity-O(n)  Space Complexity-O(n)

* @author [chaltidutta](https://github.com/chaltidutta)
*/

#include <bits/stdc++.h>
#include <vector>
using namespace std;


void solve() {

    int n; //size of the array
    cin>>n; 
    int A[n];  //array
    for(int i=0 ; i<n ; i++){
        cin>>A[i];  //array input
    }
    int left[n], right[n]; //left and right array where larger element will be stored
  
    stack<pair<int, int> > s1, s2; 

    ////getting number of element larger than A[i] on left
    for (int i = 0; i < n; ++i) { 
        int count = 1; 
        // getting elements from stack untill grater element of A[i] founds
        while (!s1.empty() && (s1.top().first) > A[i]) { 
            count += s1.top().second; 
            s1.pop(); 
        } 
  
        s1.push({ A[i], count }); 
        left[i] = count; 
    } 

    //getting number of element larger than A[i] on right 
    for (int i = n - 1; i >= 0; --i) { 
        int count = 1;  
        ////getting elements from stack untill grater or equal element of A[i] founds
        while (!s2.empty() && (s2.top().first) >= A[i]) { 
            count += s2.top().second; 
            s2.pop(); 
        }  
        s2.push({ A[i], count }); 
        right[i] = count; 
    }   
    int ans = 0; 
    /// calculate the ans
    for (int i = 0; i < n; ++i) 
        ans = (ans + A[i] * left[i] * right[i]); 

    cout<<ans<<endl; //print it

        
}


int main() {
    int t;
    cin>>t;
    while(t-->0){
        solve();
    }
    return 0;
}

/*
* input :
* 1
* 4
* 3 1 2 4
*
* output :
* 17
*/