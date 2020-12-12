/**
 * climb_stairs_merlin.cpp
 * Number of ways to climb n stairs by moving 1 or 2 steps at a time
 *
 * Description-
 * If the step is currently n-1, we can only move in 1 way
 * If the current step is n-2, we can move in 2 ways, ie 2 steps in 1 go, or 1 step and then the other step
 * Now using this, we can make a recursive formula where steps(x)=steps(x+1)+steps(x+2) where x+2<=n
 *
 * Time Complexity-O(n^2) Space Complexity-O(1)
 *
 * @author [merlin](https://github.com/m-e-r-l-i-n)
 */

#include<bits/stdc++.h>
using namespace std;

int steps(int i, int n)
{
    if(i==n-1) return 1;
    if(i==n-2) return 2;
    return steps(i+1,n)+steps(i+2,n);
}

void solve()
{
    int n;
    cin>>n;
    cout<<steps(0,n)<<"\n";
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
input-
4
1
2 
3
4

output-
1
2
3
5
*/
