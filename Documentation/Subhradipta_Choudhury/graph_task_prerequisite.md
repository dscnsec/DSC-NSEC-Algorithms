# Task Prerequisite

[Problem](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/9.%20Graph/task_prerequisite/task_prerequisite.md)  
[Source code](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/9.%20Graph/task_prerequisite/%5BCPP%5Dtask_prerequisite_csubhradipta.cpp)

## Explanation

Here, our task is to check whether all tasks can be completed or not.  

Tasks are numbered from `0` to `n - 1` .

First we will store the indegree of i<sup>th</sup> task into an array.

>Indegree means the number of edges pointing toward an element.

Then we will push all the elements (tasks) with indegree zero into a queue.

Now, traverse the queue and decrement the indegree of the other elements whose prerequisite is the particular task and count the number of elements having zero  indegree.   
Once indegree becomes zero, push it into the queue.  
Pop the element
Perform the above step until queue becomes empty.  

Check if count is equal to number of tasks or not. If so, return true, else return false.
 
## Space & Time complexities

Space Complexity:  O(n)  
Time Complexity:  O(n + e) , e = edges