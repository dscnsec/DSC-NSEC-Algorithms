# Mid

[Problem link](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/5.%20Linked%20List/mid/mid.md)

We need to find the middle element of the linked list.<br>
It is easy to find mid in a 2-pass algorithm, where we find the size, and then we find the mid of the linked list.<br>
Let's try it in 1 pass.<br>

The mid of a linked list is at exactly half distance from the start.<br>
So, if we iterate using only odd indices of a linked list, we will be iterating exactly n/2 times, assuming n is the size of linked list.<br>
So, this means, if we keep a check on the node which is at the current iteration (ie node 2 for 2nd iteration), we will finally reach the middle node when all our iterations is over.<br>
Hence we can say that we can use 2 pointers, one fast and another slow, and the fast pointer will move twice while the slow pointer will move once.<br>
After fast reaches the last position or runs out of nodes, we can safely assume that the slow pointer points to the mid of the linked list.

Time complexity-O(n)<br>
Space complexity-O(1)

The code can be found [here](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/5.%20Linked%20List/mid/MidMerlin.java).
