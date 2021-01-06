# Collect Target
[**Problem Link**](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/6.%20Binary%20Tree/collect_target/collect_target.md)

*This is binary tree problem where we are asked to check if any root to leaf path has a given sum*
*To do it we will follow a particular method,For any node, number of coins from root to that node is equal to the total coins from root to its parent plus* 
*coins in that node. Hence we calculate total path sums for all leaf nodes through bfs(Breadth-First Search).*
*Then checking if Our ans will be equal to the desired sum,then  return true else return false.*

**Time Complexity-O(N)**

**Space Complexity-O(N)**

[**Code Link**](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/6.%20Binary%20Tree/collect_target/CollectTargetArnab.java)
