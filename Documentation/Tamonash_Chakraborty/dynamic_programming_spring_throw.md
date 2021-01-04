# Spring Throw

[Problem link](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/7.%20Dynamic%20Programming/spring_throw/spring_throw.md)

We have to find the minimum number of jumps we need to reach the last index of an array (if it is possible).<br>
So, we start from 1st index.<br>
The maximum distance one can jump from an index is a[i], so the furthest position one will be able to jump to is i+a[i].<br>
Now we start moving from 1st index, and we set our current max to the maximum distance we are capable of jumping.<br>
When we reach an index such that cur=i, we have to see the maximum we can move further on.<br>
If the max reachable is <=current index, it means we cannot move on, or in other words, there is no suitable point to make a jump.<br>
Hence, we can safely assume that an answer does not exist.<br>
However, if we can jump, we will add 1 to our answer, which means we are taking the jump, and update the current max to the max index reachable.<br>
Our final answer will we total jumps or -1 if its not reachable.

Time complexity-O(n)<br>
Space complexity-O(1)

The code can be found [here](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/7.%20Dynamic%20Programming/spring_throw/spring_throw_merlin.cpp).
