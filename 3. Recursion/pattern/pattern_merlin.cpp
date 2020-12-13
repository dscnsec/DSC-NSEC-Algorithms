/**
 * pattern_merlin.cpp
 * Build a triangle pattern using numbers
 *
 * Description-
 * Since this problem uses recursion, let us define a function recur which will take a value
 *  and print current row ie the numbers from 1 to the value taken
 * If the value taken by the function is equal to our maximum number of rows, we will stop the recursion
 *
 * Time complexity-O(n^2) Space Complexity-O(1)
 *
 * @author [merlin](https://github.com/m-e-r-l-i-n)
 */

#include<bits/stdc++.h>
using namespace std;

void print_pattern(int i, int n)
{
    for(int x=1;x<=i;x++)
        cout<<x<<" ";
    cout<<"\n";
    if(i<n) print_pattern(i+1,n);
}

void solve()
{
    int n;
    cin>>n;
    print_pattern(1,n);
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
1
5
output-
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/
