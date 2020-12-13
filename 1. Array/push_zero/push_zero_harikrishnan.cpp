/**
 * @file push_zero_harikrishnan.cpp
 * @brief Push all the zeros in an array to its end, without
 * changing the order of the non-zero elements.
 *
 * Description-
 * Traverse the array once and store the non-zero elements in the array,
 * sequentially from the starting index and maintain its count. Now fill
 * the rest of the end array positions with zero.
 *
 * Time Complexity - O(n) Space Complexity - O(n)
 * Auxillary space needed - O(1)
 * @author [Harikrishnan6336](https://github.com/Harikrishnan6336)
 */

#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,cnt=0;
    cin>>n; 
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i] != 0)
        {
            arr[cnt++] = arr[i];
        }
    }
    while(cnt<n)
    {
        arr[cnt++] = 0;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
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
1 0 2 0 3
6
0 5 6 9 0 3
7
0 0 1 4 0 0 2
3
0 0 0

SAMPLE OUTPUT

1 2 3 0 0 
5 6 9 3 0 0 
1 4 2 0 0 0 0 
0 0 0 
*/
