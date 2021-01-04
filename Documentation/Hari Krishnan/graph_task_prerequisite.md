
# [Task Prerequisite](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/9.%20Graph/task_prerequisite/task_prerequisite.md)

### Objective

To determine if all tasks can be done or not, given that some tasks have some another tasks as prerequisites.

### Intuition

Let us consider all tasks as  nodes of the graph, and also let a node be directed from another node, which is a prerequisite for the former node(task).  <br>
Now we need to check if there is a topological order of the nodes in the directed graph. If there is then the answer would be "YES".<br>
Every graph without a cycle has a topological order of nodes and vice versa. Hence the problem reduces to check if a cycle exist in a graph or not. <br>

### Approach

<h4 style="color: blue">Main function</h4>
We can use an array of vectors, to store the details of Graph in Adjacensy List manner.<br>
Declare a boolean vector to mark all the visited nodes and another one to mark the nodes as visited or not in the recursion<br>
Now traverse through all the nodes of the graph and check if a cycle exists, If a cycle exists Print "NO" and return, Else Print "YES".
<br><br>
<h4>checkCyclic function</h4>
The function takes four parameters, the index of the node currently considered, the visited, recur boolean vectors and the adjacensy list.<br>
Check if th present node is already visited or not. If not visited, then do the following:
  - Mark the present node as visited and include it in the recursive stack
  - Traverse through all the adjacent nodes of the present node.
  - If the presnt adjacent node is not visited already and if those nodes  form a cycle or if that node has already come across the recursion stack, Return True.
  Remove the node from the recursive stack and return False.



Time Complexity - O(n) <br>
Space Complexity - O(n) <br>


You can find my solution [here](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/9.%20Graph/task_prerequisite/task_prerequisite_harikrishnan.cpp)
