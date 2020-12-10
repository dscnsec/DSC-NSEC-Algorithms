/**
 * 5%MeanMerlin.cpp
 * Remove the smallest 5% and largest 5% elements of an array and find mean
 *
 * Description-
 * Take the array and sort it
 * Find minimum index such that 5% elements are smaller than that
 * Find maximum index such that 5% elements are larger than that
 * Get mean by using formula=(sum/count of remaining elements)
 *
 * Time Complexity-O(nlogn) Space Complexity-O(1)
 * @author [merlin](https://github.com/m-e-r-l-i-n)
 */

#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int i,a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    int first=n*5/100,last=n-first,rem=n-2*first;
    double sum=0;
    for(i=first;i<last;i++)
        sum+=a[i];
    sum/=rem;
    cout<<sum<<"\n";
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
20
6 2 7 5 1 2 0 3 10 2 5 0 5 5 0 8 7 6 8 0
40
6 0 7 0 7 5 7 8 3 4 0 7 8 1 6 8 1 1 2 4 8 1 9 5 4 3 8 5 10 8 6 6 1 0 6 10 8 2 3 4
 
output- 
4
4.77778
*/
