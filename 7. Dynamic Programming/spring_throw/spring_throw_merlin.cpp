/**
 * spring_throw_merlin.cpp
 * Minimum jumps to reach end of array
 *
 * Description-
 * Lets start from the 1st step, our final goal is to reach (n-1)th step
 * Let us use a greedy technique to solve this problem
 * Now, we can see, that from any step, the maximum distance we can reach from current point is current point+jump distance
 * Let us choose some arbitrary distance as our max jump, now if we reach till there, and it is not the end
 *  we can be sure that we must need another jump to cover some more distance,
 *  so we choose the max we have iterated till now, and increase jump count by 1
 *
 * Time Complexity-O(n) Space Complexity-O(1)
 * Since the only thing we need is max, we can do it in constant space only.
 *
 * @author [merlin](https://github.com/m-e-r-l-i-n)
 */

#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int a[n],i;
    for(i=0;i<n;i++)
        cin>>a[i];
    int ans=0,mx=0,cur=0;
    for(i=0;i<n-1;i++)  //we need to reach last index, so we loop from 1st to last-1 index
    {
        mx=max(mx,a[i]+i);  //maximum distance we can reach
        if(i==cur)  //we have already reached an optimum point, so its time to update
        {
            ans++;
            cur=mx;
            if(mx<=i)   //this means the max that we can reach is till this point, so we cannot move any further even if we tried
            {
                ans=-1;
                break;
            }
        }
    }
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
2
11
1 3 5 8 9 2 6 7 6 8 9
11
1 1 1 1 1 1 1 1 1 1 1
output-
3
10
*/
