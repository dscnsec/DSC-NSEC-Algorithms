# Priority Tasks

[Problem link](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/4.%20Stack/priority_tasks/priority_tasks.md)

Whenever we see a circular format, we can add the string/array behind the array itself to give our question a linear format.<br>
We are going to do a same here.<br>
Make an array of size 2n and for every i in n to 2n-1, its value will be array[i-n].<br>
Now we move from 0 to (2n-1)'th index.<br>
For any element, find all elements that are smaller than it to the left of it.<br>
The ideal solution is to use stack for this.<br>
Whenever we find an element, we will remove all elements in the stack that are lesser than it, because the next higher element to the right of these elements will be our current element.<br>
We will also mark our answer accordingly.<br>
Finally, we will print our answers for 0 to (n-1)'th indices only.<br>
In case any element is the largest element in the array, it will not have any value which is larger than it to the right, so we will print -1 for them.

Time complexity-O(n)<br>
Space complexity-O(n)

The code can be found [here](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/4.%20Stack/priority_tasks/priority_tasks_merlin.cpp).
