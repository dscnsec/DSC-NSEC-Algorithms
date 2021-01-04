# [Grouping](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/5.%20Linked%20List/grouping/grouping.md)

### Objective

To group all odd nodes followed by even nodes in a linked list.

### Intuition

We consider two linked list one odd and one even, and connect the even one at the end of the odd linked list.

### Approach

Declare three pointers:  *odd, *even to traverse the two separately considered linked lists and *even_head to store the head of the even linked list. We initialize the odd_head with the head node and the even_head with head->next node. Then traverse the linked list connecting these nodes to its corresponding alternate nodes. <br>Finally join the last node of the 'odd' linked list with the head of the 'even' linked list

Time Complexity - O(n) <br>
Space Complexity - O(n) <br>


You can find my solution [here](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/5.%20Linked%20List/grouping/grouping_harikrishnan.cpp)
