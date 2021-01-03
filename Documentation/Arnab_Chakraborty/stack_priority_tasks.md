# Priority Tasks
[**Problem Link**](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/4.%20Stack/priority_tasks/priority_tasks.md)

*Its a medium level problem where we are given an array of priority values and we have to check if the value next is of higher priority or not.If yes, then print that value,else*
*Print -1.At the end consider it as circular array,and for the last value check if any higher value to it exists in the array uptill (n-2)th element as the (n-1)th*
*element is the last value itself,so we would check before that value only if any value higher to it is present or not.*
*If yes,then print it,else print -1.*
*The best way to do this is using stack,Create a stack for storing indices and accordingly reach values of stack.Now start the loop,if stack is empty then push index* 
*to stack.Else continue checking as if a value higher than the current peek value of stack is there or not*
*If yes then pop from stack and continue popping unless a higher value to the current value is achieved and push them to corresponding*
*index from stack.And at the same time check if array index has reached n-1,If yes then break from loop.*
*After the loop,we have only indices of maximum elements left in stack,hence just pop() all indices and at that indices assign -1 to output array*
 
**Time Complexity-O(N)** 

**Space Complexity-O(N)**
*(Extra space for that stack)*

[**Code Link**](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/4.%20Stack/priority_tasks/PriorityTasksArnab.java)
