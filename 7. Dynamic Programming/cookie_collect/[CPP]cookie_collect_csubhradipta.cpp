/*
 * @file: [CPP]cookie_collect_csubhradipta.cpp 
 * @brief: Find maximum numbers of cookies can be collected
 * @details:
 * Traverse matrix left to right 
 * Find the maximum out of left-up, left & left-down of previous column and sum it to the current element
 * For the top row, left-up element is not present
 * And similarly for bottom row, left-down element is not present
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
    int cookies[n][n], maxCookies[n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++)
            cin>>cookies[i][j];       
    }
    
    
    for (int j = 1; j < n; j++) { 
        for (int i = 0; i < n ; i++) {          // Traversing matrix top to bottom
                                                                                    // adding the max element in the previous column
        	if ( i == 0)
        		cookies[i][j] += max(cookies[i][j - 1], cookies[i + 1][j - 1]);                 // for top row, left-up element is not there

        	else if ( i == n-1)
        		cookies[i][j] += max(cookies[i - 1][j - 1], cookies[i][j - 1]);                         // for bottom row, left-down element is not there

        	else
                cookies[i][j] += max({cookies[i - 1][j - 1], cookies[i][j - 1], cookies[i + 1][j - 1]});                // for intermediate rows, all element present
                                                                                                            

            if( j == n-1)
                maxCookies[i] = cookies[i][j];                                  // storing the elements of last column 
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
