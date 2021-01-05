# Common Boss

[Problem link](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/6.%20Binary%20Tree/common_boss/common_boss.md)

The problem asks us to find Lowest Common Ancestor(LCA) of 2 nodes for several queries.<br>
We will solve this problem using binary lifting.<br>
For binary lifting, we will do some precomputations.<br>
We will perform a dfs and in that-
* We will store the level of every node as lev[n]=lev[parent]+1
* We will store the 2^ith ancestor of every node using
```java  
 par[n][0]=parent;
 int lg=log(N)+1,i;  //here N is total number of nodes
 for(i=1;i<=lg;i++)
    par[n][i]=par[par[n][i-1]][i-1];    //finding parent at 2^ith level
 ```

Now we have our precomputed array.<br>
Now we start taking queries.<br>
For any query, we will be provided with 2 nodes, whose lca we seek.<br>
Let they be `u` and `v`.<br>
There can be several cases-
* lca(u,v) is u
* lca(u,v) is v
* u is located at a lower level than v
* v is located at a lower level than u

We make some modifications now.<br>
We swap values of u and v, if level[u]<level[v], now level[u] will always be greater than level[v].<br>
Hence, our new conditions are-
* lca(u,v) is v
* lca(u,v) is a node which is above v

Now, we use the common thing first, bringing u to the same level as v.<br>
```java
for(i=lg;i>=0;i--)
    if(l[par[u][i]]>=l[v]) u=par[u][i]; //parent which is at the same or higher level as v
```
Ultimately, we have u and v at same level.<br>
Now if `u==v`, u is our lca.<br>

Here comes the difficult part now.<br>
We have u and v at same level, so we keep moving up as long as parent[u]!=parent[v].<br>
Since this is a tree, there has to be a node where they will be equal.<br>
Thus when they are equal, parent[u] will be our required lca.<br>
The required code is as follows-<br>
```java
for(i=lg;i>=0;i--)
    if(par[u][i]!=par[v][i])
    {
        u=par[u][i];
        v=par[v][i];
    }
//par[u][0] is the lca    
```

Time complexity-O(qlog(n))<br>
Space complexity-O(nlog(n))

The code can be found [here](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/6.%20Binary%20Tree/common_boss/common_boss_merlin.cpp).
