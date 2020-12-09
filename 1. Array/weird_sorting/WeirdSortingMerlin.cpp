/**
 * WeirdSortingMelin.cpp
 * Given an array with 7,14,21 sort them in increasing order
 *
 * Description-
 * take the input array and in first pass count number of 7s,14s, and 21s
 * fill the array until count of 7>0 and then do same for 14 and 21
 *
 * Time Complexity-O(n) Space Complexity-O(n)
 * @author [merlin](https://github.com/m-e-r-l-i-n)
 */

#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,i,c[4];
    cin>>n;
    int a[n];
    c[1]=c[2]=c[3]=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        c[a[i]/7]++;        //count of 7 14 and 21s
    }

    int j=0;
    for(i=1;i<4;i++)
    while(c[i]>0)
    {
        a[j++]=7*i;     //adding all 7s first then 14 then 21 starting from 0th index
        c[i]--;
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
2
10
7 21 14 14 7 7 7 21 21 14
5
7 7 21 14 21

output-
7 7 7 7 14 14 14 21 21 21
7 7 14 21 21
*/
