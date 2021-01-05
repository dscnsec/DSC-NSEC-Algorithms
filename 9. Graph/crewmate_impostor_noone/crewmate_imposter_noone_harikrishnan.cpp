/**
 * @file crewmate_imposter_noone_harikrishnan.cpp
 * @brief We have to find the number of regions the space station can be divide in, where
 * each of these given characters divide the block into contiguous regions.
 *
 * Description -  Given a space station is in the shape of an NXN square, composed of blocks of size 1x1. Each 1X1 has either a crewmate, denoted by a '/' , or an impostor, denoted by a '' , or no one, denoted by a '_'. 
 * Now /  \ can divide the space into different regions. 
 * In the given space the minimal unit is a cell and that cell is further divided using / and \ .Note that _ cannot be used to divide the space.
 * Now, if we divide each cell into a 3*3 cell, we can solve the problem as in a continous domain.
 *
 * Time Complexity - O(N^2) Space Complexity - O(N^2)
 * @author [Harikrishnan6336](https://github.com/Harikrishnan6336)
 **/

#include<bits/stdc++.h>
using namespace std;

// Recursively dfs all the associated cells and find the cells coming under a region.
void dfs(vector<vector<int>>& sub, long unsigned int i, long unsigned int j, int N) 
{
  if (i >= 0 && j >= 0 && i < (N*3) && j < (N*3) && sub[i][j] == 0) 
  {
    sub[i][j] = 1;     //Mark the current cell as visited
    
    // Recursively search for cells towards all four directions from the present cell.
    dfs(sub, i - 1, j,N);
    dfs(sub, i + 1, j, N); 
    dfs(sub, i, j - 1, N); 
    dfs(sub, i, j + 1, N);
  }
}

void solve()
{
    int N;
    cin>>N;            
    vector<string> station;
    string tempS;
    
    // Input the vector of given strings.
    for(int i=0;i<N;i++)
    {
        cin>>tempS;
        station.push_back(tempS);
    }

// We consider each cell of the given space as a 3*3 cell so that we can mark / and \ effectively.
vector<vector<int>> sub(N * 3, vector<int>(N * 3, 0));

    // Traverse the sub and mark the cells indicating the borders of the formed regions.
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j) 
        {
            int row = i*3, col = j*3;
            if (station[i][j] == '/') 
            {
                sub[row][col + 2] = 1;
                sub[row + 1][col + 1] = 1;
                sub[row + 2][col] = 1;
            }
            if (station[i][j] == '\\') 
            {
                sub[row][col] = 1;
                sub[row + 1][col + 1] = 1;
                sub[row + 2][col + 2] = 1;
            }    
        }
        
    int regions = 0;    // Counter for the number of regions found
    for (long unsigned int i = 0; i < N*3; ++i)
    {
        for (long unsigned int j = 0; j < N*3; ++j) 
            if (sub[i][j] == 0)  //New region found
            {
                dfs(sub, i, j,N);  // Search for all the cells in that region 
                regions++;    
            }
    }
    cout<<regions<<endl;
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

5
2
_/
/_
2
_/
__
2
\/
/\
2
/\
\/
2
//
/_


SAMPLE OUTPUT

2
1
4
5
3

*/
