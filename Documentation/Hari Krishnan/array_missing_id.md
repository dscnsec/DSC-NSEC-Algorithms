# [Missing Id](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/1.%20Array/missing_id/missing_id.md)


### Objective
  
To find the stack number of the stolen id number  
  
### Intuition

Given that stack 1 contains only 2 ids(i.e, 1 and 2) and the remaining stacks contains 'x' ids each. So, in order to find the stack in which the x'th id belongs to we need to 
divide (n-2) by x. The problem can be solved using division and also we have to consider that, we start storing x ids in each stack from the second stack.

### Approach

If n <= 2, answer is 1.
Else
 answer is ( ( ( n - 2 ) / x ) + k), 
      where k = 1, if ( n - 2 ) is even and k = 2, if ( n - 2 ) is odd.
      
The variable k is used in the equation as when n >= 2,as we start from the second stack.

Time Complexity - O(1)
Space Complexity - O(1)

You can find my solution [here](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/1.%20Array/missing_id/missing_id_harikrishnan.cpp)
