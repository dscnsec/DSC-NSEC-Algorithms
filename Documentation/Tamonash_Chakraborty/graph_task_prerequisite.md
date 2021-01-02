# Task Prerequisite

[Problem link](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/9.%20Graph/task_prerequisite/task_prerequisite.md)

Given n tasks and a list of them where we need to complete some tasks before the others.<br>
We need to find out if we can complete all tasks in some order.<br>
Note that there is only 1 condition where we cannot perform a task.<br>
It is if the prerequisite of the task is the task itself.<br>
This means that we can reduce the problem to a graph problem, where prerequisites and the current task form edges.<br>
All we have to do is detect cycles in the graph.<br>

How do we do that?<br>
Note that we can run a dfs from every node that is unvisited from 0 to n, starting with 0.<br>
For any node, we recursively visit all the nodes which are prerequisites of this task.<br>
If the node doesn't have a cycle, we mark it as okay.<br>
If we encounter a task which is already visited but not yet marked as okay, it means it can form a cycle with the current node, and we know that we have found a cycle.<br>

If a cycle exists, we cannot complete the task.<br>
If it doesn't, then we can always find a way to complete our task.<br>

Time complexity-O(n)<br>
Space complexity-O(n).

The code can be found [here](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/9.%20Graph/task_prerequisite/TaskPrerequisiteMerlin.java).

