# Task Prerequisite
[**Problem Link**](https://github.com/dscnsec/DSC-NSEC-Algorithms/tree/master/9.%20Graph/task_prerequisite)
[**Code Link**](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/9.%20Graph/task_prerequisite/task_prerequisite_sayantan.cpp)


Approach Used :
All tasks are nodes of the graph and if task u is a prerequisite of task v, we will add a directed edge from node u to node v.
Now, this problem is equivalent to detecting a cycle in the graph represented by prerequisites. If there is a cycle in the graph,
then it is not possible to finish all tasks because in that case there is no any topological order of tasks. Since pair is inconvenient
for the implementation of graph algorithms, we first transform it to a graph. If task u is a prerequisite of task v, we will add a
directed edge from node u to node v.

Time Complexity : O(N)
Space Complexity : O(N)