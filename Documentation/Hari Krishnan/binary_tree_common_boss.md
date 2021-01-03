 # [Common Boss](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/6.%20Binary%20Tree/common_boss/common_boss.md)

### Objective

We need to find the lowest common ancestor of two given nodes.

### Intuition

Here we can use a recursive function. We can recursively traverse the tree in a DFS manner and check if we find a node with value of the one of the given nodes.<br>
If we find such a node then return that node, Else return NULL. By following this, the node which gets a not NULL value returned from both its sides will be the LCA.<br>
 A special case occurs when the lca is one of the nodes(with employee ids), in that case, the algorithm, figures out it, and returns the  lca node, without even reaching the other employee id node.

### Approach

Traverse the binary tree recursively in a DFS way. Find the value returned by the left, right subtrees. If both of them are not NULL then that node is the LCA.

Time Complexity - O(n) <br>
Space Complexity - O(n) <br>


You can find my solution [here](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/6.%20Binary%20Tree/common_boss/common_boss_harikrishnan.cpp)
