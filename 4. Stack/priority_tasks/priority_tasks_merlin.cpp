/**
 * priority_tasks_merlin.cpp
 * Find largest number to the right of a number in a circular array
 *
 * Description-
 * Our array is circular, so we can do a simple thing, concatenate the array behind itself
 * Now we need to calculate the largest number to the right of the first n numbers
 * We can simply use a stack where we will add values
 * Whenever we need to add a new value, as long as stack is not empty and the topmost element is smaller than the current element,
 *  we pop elements from the stack, and the answer for the popped values is our current value
 * After the above operation is completed, we add our new element to the stack
 *
 * Time Complexity-O(n) Space Complexity-O(n)
 *
 * @author [merlin](https://github.com/m-e-r-l-i-n)
 */

#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int a[2*n],i;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        a[n+i]=a[i];
    }
    stack<int> s;
    int ans[2*n];
    memset(ans,-1,sizeof(ans));

    for(i=0;i<2*n;i++)  //we get our circular array
    {
        while(!s.empty() && a[s.top()]<a[i])    //all smaller elements will have this value as its nearest larger value
            ans[s.top()]=a[i],s.pop();
        s.push(i);
    }

    for(i=0;i<n;i++)
        cout<<ans[i]<<" ";
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
3
1 2 1
4
1 3 4 2
 
output-
2 -1 2
3 4 -1 3
*/
