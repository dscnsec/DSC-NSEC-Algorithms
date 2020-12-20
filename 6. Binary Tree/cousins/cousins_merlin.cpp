/**
 * cousins_merlin.cpp
 * Find if 2 nodes are cousins in a binary tree
 *
 * Description-
 * First let us make an adjacency list of the tree and take the root
 * Start a dfs from the root
 * Everytime we visit a node, we will calculate its distance from root(distance of parent+1) and store the parent of the node
 * For every query, we can check if the 2 nodes have same level and belong to different parents,
 *  since the values are precomputed, it will just take O(1)
 *
 * Time Complexity-O(q+n) Space Complexity-O(n)
 * where q is number of queries and n is number of nodes of a binary tree
 *
 * @author [merlin](https://github.com/m-e-r-l-i-n)
 */

#include<bits/stdc++.h>
using namespace std;
map<int,vector<int>> g;
map<int,int> par,dep;

void dfs(int n,int p)
{
    dep[n]=dep[p]+1;
    par[n]=p;
    for(auto x:g[n])
    if(x!=p) dfs(x,n);
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
    dfs(r,r);
    cin>>q;
    while(q--)
    {
        int u,v;
        cin>>u>>v;
        bool ans=false;
        if(dep[u]==dep[v] && par[u]!=par[v]) ans=true;
        if(ans) cout<<"True\n";
        else cout<<"False\n";
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

input1-
7
15 10
15 20
10 5
10 12
20 17
20 25
15
2
10 20
5 17

output1-
False
True
*/
