# Common Boss
[**Problem Link**](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/6.%20Binary%20Tree/common_boss/common_boss.md)

*This problem just tells us to find the Lowest Common Ancestor of the Binary Tree*
*The lca for a Binary tree can be found by the method of Binary Lifting very easily*
*Here*
*In binary lifting, we build a 2D array which stores ancestors of every node*
*In other words, p[i][j] will store the 2^j th ancestor of i*
*Thus, we can find lca every time in O(log(n))*
*Now, when we take 2 nodes u and v, we take the node that is further away from the root as u*
*At first, we run a loop and check if v is the ancestor of u*
*If it is, then u is our lca.*
*If it is not, then we have to run a loop again and find the node which is closest to the root which is not an ancestor to u or v,*
*but the node stored in p[x][0] is the closest.*

**Time Complexity-O(qlog(n))** 
*where q is number of queries and n is number of nodes of a binary tree*

**Space Complexity-O(nlog(n))**

[**Code Link**](https://github.com/dscnsec/DSC-NSEC-Algorithms/pull/215/commits/b181eed3560a188a29370cb7188454de57773745)
