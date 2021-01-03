# Rank

[Problem link](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/6.%20Binary%20Tree/rank/rank.md)

Given a binary search tree, we have to find number of nodes whose values lie between [u,v]<br>
We do the simple approach here-<br>
For any query, we will iterate through the entire bst using dfs and find number of nodes in the range.<br>
This number will be our answer.

Time complexity-O(n*q) where n=number of nodes, q=number of queries<br>
Space complexity-O(1)

The code can be found [here](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/6.%20Binary%20Tree/rank/rank_merlin.cpp).
