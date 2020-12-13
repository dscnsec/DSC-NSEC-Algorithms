/**
 * @file pattern_harikrishnan.cpp
 * @brief We need to print the pattern specified in the problem.
 *
 * Description-
 *  A function row(n) makes a recurive call to row(n-1)and then prints the n'th row
 *  In that way the call to row(n) will come out last from the function call stack
 *  and that row gets printed last.
 *
 * Time Complexity - O(n^2) Space Complexity - O(1)
 * Auxillary space needed - O(1)
 * @author [Harikrishnan6336](https://github.com/Harikrishnan6336)
 */

#include<bits/stdc++.h>
using namespace std;

void row(int n)  // recursively calls row(n-1) and prints the n'th row
{
    if(n<1)
    {
        return;
    }
    row(n-1);
    for(int i=1;i<=n;i++)
        cout<<i<<" ";    //prints the n'th row
    cout<<endl;
}

void solve()
{
    int n;
    cin>>n;
    row(n);
    cout<<endl;
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
5
7
0
1

SAMPLE OUTPUT

1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 

1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 
1 2 3 4 5 6 
1 2 3 4 5 6 7 



1 

*/
