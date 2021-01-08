# Rank 
[**Problem Link**](https://github.com/dscnsec/DSC-NSEC-Algorithms/tree/master/6.%20Binary%20Tree/rank)
[**Code Link**](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/6.%20Binary%20Tree/rank/rank_sayantan.cpp)


Approach Used :
In this problem we will use a recursive way. We will start traversing the binary tree form the node and if a particular node lies in
the given range then we will add 1 to the result and recur for the children. if the current node is found to be smaller then recur to its right child else recur to its left child

Time Complexity : O(n)
Space Complexity : O(n)