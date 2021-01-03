# [Remove Imposters](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/5.%20Linked%20List/remove_impostors/remove_impostors.md)

### Objective

We need to remove all y imposters after x crewmates reprsented in a linked list.

### Intuition

We can maintain a loop inside which the deletion of y nodes after x nodes keep on happening till the end of the linked list. 

### Approach

In a loop, do the following, while the current node is not NULL,<br>
- Traverse the x nodes that represents the crewmates
- Store the node before the start node of the y imposters which is going to be deleted.
- Delete the next y nodes that represents the imposters.
- Link the previous node(the stored node) with the next node (node after the deleted nodes.) 
<br>
Atlast print the newly formed linked list
<br>
<br>

Time Complexity - O(n) <br>
Space Complexity - O(n) <br>


You can find my solution [here](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/5.%20Linked%20List/remove_impostors/remove_imposters_harikrishnan.cpp)
