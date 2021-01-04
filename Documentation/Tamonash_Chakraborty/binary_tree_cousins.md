# Cousins

[Problem link](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/6.%20Binary%20Tree/cousins/cousins.md)

We will form our tree first.<br>
Now, for every node, we will calculate the distance of this node from root, and the parent of the current node.<br>
Note that for root node, we will take parent as -1 and distance as 0.<br>

Now, we will be given q queries.<br>
In each query, we will be given 2 nodes, and we have to check if they are cousins or not.<br>
2 nodes are cousins when they are located at an equal depth from root node, and they do not belong to the same parent(may have same grandparent).<br>
So for any query, we will check the following 2 things-
* parent[u]==parent[v], assuming u and v are our given nodes in the particular query
* depth[u]==depth[v]<br>

If the first condition is `false` and second condition is `true`, then the 2 nodes are cousins.<br>
Otherwise, they are not.

Time complexity-O(n+q)<br>
Space complexity-O(n)

The code can be found [here](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/6.%20Binary%20Tree/cousins/cousins_merlin.cpp).
