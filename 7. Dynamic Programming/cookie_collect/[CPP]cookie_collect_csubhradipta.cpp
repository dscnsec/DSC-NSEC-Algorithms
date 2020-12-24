/*
 * @file: [CPP]cookie_collect_csubhradipta.cpp 
 * @brief: Find maximum numbers of cookies can be collected
 * @details:
 * Add a row of zeroes to top and bottom of the matrix, for ease of checking the maximum elements
 * Then traverse matrix left to right from 2nd to nth column
 * Find the maximum out of left-up, left & left-down of previous column and sum it to the current element
 * The maximum element of the last column is the maximum cookies that can be collected
 * Space Complexity : O(n^2)
 * Time Complexity : O(n^2)
 * @author [Subhradipta Choudhury](https://github.com/csubhradipta)
 */

#include <bits/stdc++.h> 
using namespace std; 

void solve(){
    int n;
    cin>>n;
    int cookies[n+2][n], maxCookies[n];
    for (int i = 0; i < n+2; i++){
        for (int j = 0; j < n; j++){
            
            if(i >= 1 && i <= n)
                cin>>cookies[i][j];
            else
                cookies[i][j] = 0;              // Initializing the top and bottom of matrix with row of zeroes
        }                                   
    }
    
    
    for (int j = 1; j < n; j++) { 
        for (int i = 1; i <= n ; i++) {         // Traversing matrix top to bottom

                cookies[i][j] += max({cookies[i - 1][j - 1], cookies[i][j - 1], cookies[i + 1][j - 1]});    // adding the max element in the previous column
                                                                                            // (left-up, left, left-down)

                if( j == n-1)
                    maxCookies[i-1] = cookies[i][j];                                            // storing the elements of last column 
        } 
    } 

    cout<<*max_element(maxCookies, maxCookies + n)<<endl;           // maximum cookies that can be collected
     
}

int main() 
{ 
    int t;
    cin>>t;
    while(t--){
        solve();
    } 
    return 0; 
} 