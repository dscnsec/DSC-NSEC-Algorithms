
# Priority Tasks
[Problem](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/4.%20Stack/priority_tasks/priority_tasks.md)   
[Source code](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/4.%20Stack/priority_tasks/%5BCPP%5Dpriority_tasks_csubhradipta.cpp)    
## Explanation
Here, our task is to find out the task with the next greater priority number for every i<sup>th</sup> task.

Our first job is to concatenate the array to itself as we will traverse the array circularly.

Declare an array "result[]" of size n to store the higher priority task than the i<sup>th</sup> task and initialize all places with ``-1``

Now, we will take a stack (say ``st``) to store the index of tasks.

While the stack is non-empty and ``task[i]`` is greater than ``task[st.top()]`` , then set ``result[st.top()%n] = task[i] `` and pop the top element from stack.    
Here, ``st.top()%n`` as the traversal is circular, i.e. twice of the original size.  
Push ``i`` into the stack ``st``

So now we got our required array having the next higher priority task for i<sup>th</sup> task and ``-1`` if no such task exists.
 
## Space & Time complexities
Space Complexity: &emsp;O(n)  
Auxiliary space: O(n)  
Time &nbsp;Complexity: &emsp;O(n)

