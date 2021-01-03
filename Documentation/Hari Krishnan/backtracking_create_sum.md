# [Create Sum](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/8.%20Backtracking/create_sum/create_sum.md)

### Objective

To find a list of all unique combinations of the N integers where the chosen numbers sum to X.

### Intuition

As we have to sum the numbers to a given target, we can sort the array to simplify the process. Also we might have to try out all possible combinations, so as to list all the required
unique combinations. 

### Approach

We can sort the given array in ascending order.<br>
Then call the recursive backtracking function which does the following.


Starting from the first index of the array we check if all possible combinations, where each element is allowed to appear more than once. While checking each combination we also store those elements in a vector so that if we achieve the resultant sum, then we can print the elements.
When a combination fails to achieve a sum of X, we remove an element from the vector, and adds another element to the combination and checks the condition.

Time Complexity - O(n*sum) <br>
Space Complexity - O(n) <br>


You can find my solution [here](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/8.%20Backtracking/create_sum/create_sum_harikrishnan.cpp)
