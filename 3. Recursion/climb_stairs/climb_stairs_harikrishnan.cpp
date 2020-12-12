/**
 * @file climb_stairs_harikrishnan.cpp
 * @brief We need to find the number of ways in which we can get to the second floor
 * where we can take one step or maximum two steps.
 *
 * Description-
 *  From (n-1)th step we can move in one way only(take 1 step) 
 *  From (n-2)th step we can move in two ways(take two 1 step or take one 2 step) 
 *
 * Time Complexity - O(2^n) Space Complexity - O(1)
 * Auxillary space needed - O(1)
 * @author [Harikrishnan6336](https://github.com/Harikrishnan6336)
 */

#include<bits/stdc++.h>
using namespace std;

int num_of_steps(int n)
{
    if(n <= 1)
    {
        return 1;
    }
    else
    {
     return num_of_steps(n-1) + num_of_steps(n-2);
    }
}

void solve()
{
    int n;
    cin>>n;
    cout<<num_of_steps(n)<<endl;
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

4
1
12 
0
9
SAMPLE OUTPUT

1
233
1
55

*/
