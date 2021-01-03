# [Collect Target](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/6.%20Binary%20Tree/collect_target/collect_target.md)

### Objective

Given a starting point and an end point where in each point it can diverge to 0,1 or 2 paths and each points contain coins. We need to check if we can collect a target amount of coins by travelling from root to the end point.

### Intuition

SInce its given in the question that a point can diverge into 2,1 or 0; we can use Binary Tree data structure to solve the problem.<br>
Also we can use a recursive function, where each sub-recursive call has a target less than the coins present in the current point.

### Approach

Use a recursive function, that does the following<br>
- If the current considered node is NULL, return false
- If the current node is a leaf node(ie its left and right nodes are NULL and the present target is equal to the value of its node, return false.
- Else check if the path through the right subtree or left subtree can reach us to the target sum. 
<br><br>


Time Complexity - O(n) <br>
Space Complexity - O(n) <br>


You can find my solution [here](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/6.%20Binary%20Tree/collect_target/collect_target_harikrishnan.cpp)
