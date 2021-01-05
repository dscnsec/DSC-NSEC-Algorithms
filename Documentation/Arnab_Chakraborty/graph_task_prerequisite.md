# Task Prerequisite
[**Problem Link**](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/9.%20Graph/task_prerequisite/task_prerequisite.md)

*In this problem we are given a sequence of tasks which can only be completed when its pre-requisite task given is completed*
*In this way its asked if we can complete all the tasks*
*So when we cannot complete all the tasks?*
*Answer is quite obvious*
*Only when there is a cycle present in the graph,in all other cases we can complete all tasks*
*So the problem gets shortened* 
**to detect a cycle in a graph.**
*So here we proceed by the following approach::-->We take an adjacency list and add edge from one side, not from both as the direction is specific in a directed graph.*
*Then we will take two boolean arrays,one for checking the visited nodes and other the recursion array which will recur along with the methods.*
*Now we would iterate through the nodes from 0 to N-1.And check if the same node that has been visited is again get retrieved.*
*If any node gets retrieved more than once then there is a cycle.Else no cycle is formed.Then return true or false accordingly.*
 
**Time Complexity-O(N)**

**Space Complexity-O(N)**

[**Code Link**](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/9.%20Graph/task_prerequisite/TaskPrerequisiteArnab.java)


