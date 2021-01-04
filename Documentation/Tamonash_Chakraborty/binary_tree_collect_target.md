# Collect Target

[Problem link](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/6.%20Binary%20Tree/collect_target/collect_target.md)

We are given a binary tree, and a target sum.<br>
We have to find if there exists a path from root to leaf whose sum is the given target.<br>
We will use bfs to solve the problem.<br>
In bfs, we iterate through all nodes present at a current distance from the root(called level) and then move on to the next level.<br>
If a node has no child nodes, then it is a leaf node.<br>
When we find a leaf node, we will check if the sum of the root to leaf path equals the target sum.<br>
Since there will be multiple leaf nodes, we will make a `sum` array which will store the sum of all nodes in the path from root to that node.<br>
For any node `n`, sum[n]=sum[parent]+val[n]<br>
Thus, when we finally find a leaf node, we can do the sum checking in O(1).<br>
If we find such a path with our given sum, we stop our iteration.<br>

Time complexity-O(n)<br>
Space complexity-O(n)

The code can be found [here](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/6.%20Binary%20Tree/collect_target/CollectTargetMerlin.java).
