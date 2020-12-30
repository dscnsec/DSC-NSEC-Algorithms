# Remove Imposters

[Problem link](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/5.%20Linked%20List/remove_impostors/remove_impostors.md)

We are given 2 integers `x` and `y`.<br>
We need to keep the 1st `x` nodes, remove the next `y` nodes, then keep the next `x` nodes and so on.<br>
So we iterate through the linked list, keep the first `x` nodes, then skip the next `y` nodes, and continue the process.<br>
Finally, we add a `null` after the added nodes, to cut the link with the remaining nodes which haven't been added.<br>

Time complexity-O(n)<br>
Space complexity-O(1)

The code can be found [here](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/5.%20Linked%20List/remove_impostors/RemoveImpostersMerlin.java).
