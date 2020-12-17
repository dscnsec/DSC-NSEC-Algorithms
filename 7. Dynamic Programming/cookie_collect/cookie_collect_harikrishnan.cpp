/**
 * @file cookie_collect_harikrishnan.cpp
 * @brief Here we need to find the maximum cookies that can be collected from a square shaped matrix.
 *
 * Description - Here, all the values are positive so we need to travel through maximum values 
 *  Since we can only move right(or right-up or right-down), we begin from any row in the first column and end in any row in the last column.
 * We can fill a dp matrix from the last column to the first in an Dynamic Programming way and the maximum value among the values in the first column.
 * Consider the constraints like we cannot goto right-up from first row and right-down from last row and to the right of the last column.
 *
 * Time Complexity - O(n*n) Space Complexity - O(n*n)
 * @author [Harikrishnan6336](https://github.com/Harikrishnan6336)
 **/

#include<bits/stdc++.h>
using namespace std;
 
void solve()
{
        int n; // size of the square matrix.
        cin>>n; 
        int cook[n][n],dp[n][n]; // 'cook' is used to store the given values
        // 'dp' is used to store the intermediate results (maximum cookies collected from last column till that column)
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>cook[i][j]; 
            }
        }
        
        for(int j = n-1;j>=0;j--) // starting from the last column
        {
            for(int i=0;i<n;i++)  
            {
                // value in right cell
                int right = (j ==(n-1))?0:dp[i][j+1];
                // value in right-up cell
                int rightup = (i == 0 || (j == n-1))?0:dp[i-1][j+1];
                // value in right-down cell
                int rightdown = ((i == n-1) || (j == n-1))?0:dp[i+1][j+1];
                
                dp[i][j] = cook[i][j] + max(right,max(rightup,rightdown));
            }
        }
    
        // Find the maximum cell value in the first column
        int ans = dp[0][0]; 
        for (int i=1; i<n; i++) 
            ans = max(ans, dp[i][0]); 
        cout<<ans<<endl;
    return;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}

/*

SAMPLE INPUT

2
4
1 3 1 5
2 2 4 1
5 0 2 3
0 6 1 2
3
9 0 1
4 8 8
0 0 7

SAMPLE OUTPUT

16
25

*/
