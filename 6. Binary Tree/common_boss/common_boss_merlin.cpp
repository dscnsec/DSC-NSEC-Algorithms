/**
 * common_boss_merlin.cpp
 * Find lca of 2 nodes of a binary tree for multiple queries
 *
 * Description-
 * Lca can be found very easily by a process called as binary lifting
 * In binary lifting, we build a 2D array which stores ancestors of every node
 * In other words, par[i][j] will store the 2^j th ancestor of i
 * Thus, we can find lca every time in log(n)
 * Now, when we take 2 nodes u and v, we take the node that is further away from the root as u
 * At first, we run a loop and check if v is the ancestor of u
 * If it is, then u is our lca.
 * If it is not, then we have to run a loop again and find the node which is closest to the root which is not an ancestor to u or v,
 *  but the node stored in par[x][0] is
 *
 * Time Complexity-O(qlog(n)) Space Complexity-O(nlog(n))
 * where q is number of queries and n is number of nodes of a binary tree
 *
 * @author [merlin](https://github.com/m-e-r-l-i-n)
 */

#include<bits/stdc++.h>
using namespace std;

const int lg=18,N=100010;
int par[N][lg+1],l[N];
vector<int> g[N];

int lca(int u,int v)
{
    if(l[u]<l[v]) u=u^v^(v=u);

    int i;
    for(i=lg;i>=0;i--)
    if(l[par[u][i]]>=l[v]) u=par[u][i]; //parent which is at the same level as v
    if(u==v) return u;  //here goes the easy part

    for(i=lg;i>=0;i--)
    if(par[u][i]!=par[v][i])    //u is currently at the same level as v, so we need to move up the tree as long as we dont find a common point
    {
        u=par[u][i];
        v=par[v][i];
    }
    return par[u][0];
}

void dfs(int u,int v)
{
    par[u][0]=v;
    l[u]=l[v]+1;
    for(int i=1;i<=lg;i++)
    par[u][i]=par[par[u][i-1]][i-1];    //finding parents at every 2^ith level

    for(auto x:g[u])
    if(x!=v) dfs(x,u);
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
        cout<<lca(u,v)<<"\n";
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
6
0 1
0 4
1 2
1 3
4 5
0
5
1 3
3 5
2 4
2 3
4 5

output1-
1
0
0
1
4


input2-
9
3 1
5 2
5 6
1 0
1 8
2 7
2 4
3 5
3
2
6 2
5 0

output2-
5
3
 */
