/**
 * find_min_merlin.cpp
 * Smallest element of every subarray
 *
 * Description-
 * For any element, the number of subarrays for which it will be smallest will be
 *  number of elements to its left which are larger than it*number of elements to its right which are larger than it
 * This can be done easily with a stack, where at instance, we will remove all elements which are larger than the current element
 *  and then push this element into the stack
 * We will do the same thing for left and for right
 * Our answer will be the sum of the product of left and right multiplied by array element for every index
 *
 * Time Complexity-O(n) Space Complexity-O(n)
 *
 * @author [merlin](https://github.com/m-e-r-l-i-n)
 */

#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

void solve()
{
    int n,i;
    cin>>n;
    int a[n];
    lli sz[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        sz[i]=1;    //setting default values of sz array
    }

    stack<int> l,r;
    l.push(-1);     //for smallest character, the maximum subarrays from left will be index+1, so we add -1
    r.push(n);  //for smallest character, the maximum subarrays from right will be prev-index, so we add n as our prev
    for(i=0;i<n;i++)
    {
        while(l.top()!=-1 && a[l.top()]>=a[i])
            l.pop();
        sz[i]*=i-l.top();
        l.push(i);
        while(r.top()!=n && a[r.top()]>a[n-i-1])
            r.pop();
        sz[n-i-1]*=r.top()-(n-i-1);
        r.push(n-i-1);

    }

    lli ans=0,M=1000000007;
    for(i=0;i<n;i++)
        ans=(ans+sz[i]*a[i]%M)%M;
    cout<<ans<<"\n";
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
3
4
3 1 2 4
5
5 4 1 2 3
3
1 1 1

output-
17
29
6
*/
