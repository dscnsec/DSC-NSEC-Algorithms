# Reverse

[Problem link](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/5.%20Linked%20List/reverse/reverse.md)

In order to reverse a linked list, we iterate through it, and we do the following steps.<br> 
* We store the next node of the current node in a temporary variable.<br>
```Node temp=cur```
* We add the previous part of the reversed list to the next of current node.<br>
`cur.next=prev`
* We assign current  node as the head of the reversed list.<br>
`prev=cur`
* We move on to the next node which has not yet been accessed.<br>
`cur=temp`
<br>

Finally we have our reversed linked list.

Time complexity-O(n)<br>
Space complexity-O(1)

The code can be found [here](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/5.%20Linked%20List/reverse/ReverseMerlin.java).
