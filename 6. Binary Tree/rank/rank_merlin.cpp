/**
 * rank_merlin.cpp
 * Find number of nodes between a range in a binary search tree
 *
 * Description-
 * For any node, all nodes to its left are smaller than it.
 * All nodes to its right are larger than it.
 * So when we are asked to find number of nodes between any 2 nodes, we will iterate through the tree and find the result
 *
 * Time Complexity-O(q*n) Space Complexity-O(n)
 * where q is number of queries and n is number of nodes of a binary tree
 *
 * @author [merlin](https://github.com/m-e-r-l-i-n)
 */

#include<bits/stdc++.h>
using namespace std;
map<int,vector<int>> g;

int count(int n,int p,int l,int r)
{
    int ans=0;
    if(n>=l && n<=r) ans++;
    for(int x:g[n])
    if(x!=p)
    ans+=count(x,n,l,r);
    return ans;
}

int main()
{
    int n,q,r;
    cin>>n;
    int i;
    for(i=0;i<n-1;i++)
    {
        int u,v;
        cin>>u>>v;  //parent-child format
        g[u].push_back(v);
    }
    cin>>r;     //we need root because not always will the root of the tree be 0
    cin>>q;

    while(q--)
    {
        int u,v;
        cin>>u>>v;
        if(u>v) u=u^v^(v=u);
        cout<<count(r,r,u,v)<<"\n";
    }
    return 0;
}

/*
note that the input format is
number of nodes
parent1 child1
parent2 child2
...
parentn childn
root
queries
q1 q2
...
q(2queries-1) q(2queries)

input-
7
10 5
15 10
15 20
20 17
10 12
20 25
15
5
3 7
1 2
35 40
10 30
5 15

output-
1
0
0
6
4
*/
