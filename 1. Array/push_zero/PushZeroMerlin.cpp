/**
 * PushZeroMerlin.cpp
 * Remove all zeros from the array and add them to the end
 *
 * Description-
 * iterate through the array and whenever we encounter a non-zero element, add it to the last position which has not yet been claimed by a non-zero
 * the remaining elements are to be filled with 0 during the array is iterated
 *
 * Time Complexity-O(n) Space Complexity-O(1)
 * @author [merlin](https://github.com/m-e-r-l-i-n)
 */

#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int a[n],j=0,i;
    for(i=0;i<n;i++)
        cin>>a[i];

    for(i=0;i<n;i++)
    {
        int v=a[i];
        a[i]=0;
        if(v!=0) a[j++]=v;
    }

    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<"\n";
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
5
1 2 3 4 5
5
0 0 0 1 0
5
1 0 2 0 3
6
0 5 6 9 0 3

output-
1 2 3 4 5
1 0 0 0 0
1 2 3 0 0
5 6 9 3 0 0 
*/
