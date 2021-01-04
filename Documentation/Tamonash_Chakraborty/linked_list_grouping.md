# Grouping

[Problem link](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/5.%20Linked%20List/grouping/grouping.md)

We have to group all odd position nodes first, and then the even positioned nodes of a linked list.<br>
Now let us remove the base case first.<br>
If number of nodes `<2`, we dont have to change anything.<br>
Otherwise, we need to initialize 1st node as head of odd nodes, 2nd node as head of even nodes, and then iterate through the linked list.<br>
Whenever we find an odd indexed element, we add it to the tail of odd linked list.<br>
We do the same for even nodes and even linked list.<br>
Finally, we add the head of the even linked list to the tail of the odd linked list.<br>
Now we have our final linked list.<br>

Time complexity-O(n)<br>
Space complexity-O(1)

The code can be found [here](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/5.%20Linked%20List/grouping/GroupingMerlin.java).
