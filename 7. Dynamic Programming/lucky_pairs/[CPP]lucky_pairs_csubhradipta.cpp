/*
 * @file: [CPP]lucky_pairs_csubhradipta.cpp 
 * @brief: Find maximum numbers of cookies can be collected
 * @details:
 * n = size of first string, m = size of second string
 * Create a matrix of (n+1) x (m+1) and fill the topmost row and leftmost column with zeroes
 * If a character matching in corresponding row and column, fill the cell by adding 1 to the value of up-left diagonal
 * Else fill the cell with largest element of previous row and previous column
 * Length of longest subsequence = matrix[n][m]
 * Check if the length of longest subsequence is greater than or equal to half the length of largest string among the two
 * If true, return "YES"; Else "NO"
 * Space Complexity : O(n)
 * Time Complexity : O(n*m)
 * @author [Subhradipta Choudhury](https://github.com/csubhradipta)
 */

#include <bits/stdc++.h> 
using namespace std; 

void solve(){
    string x, y;
    cin>>x>>y;
    int xLen = x.size(), yLen = y.size();
    int subSeq[xLen + 1][yLen + 1];
    
    for (int i = 0; i <= xLen; i++) {
        for (int j = 0; j <= yLen; j++) {
            if (i == 0 || j == 0)
                subSeq[i][j] = 0;               // filling topmost row and leftmost column
            else if (x[i - 1] == y[j - 1])
                subSeq[i][j] = subSeq[i - 1][j - 1] + 1;    // filling the cell with adding 1 to the value of up-left diagonal
            else
                subSeq[i][j] = max(subSeq[i - 1][j], subSeq[i][j - 1]);     // filling the cell with max of previous row cell and previous column cell
        }
    }
    
    string check = max(xLen, yLen)/2 <= subSeq[xLen][yLen] ? "YES" : "NO";
    cout<<check<<endl;
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