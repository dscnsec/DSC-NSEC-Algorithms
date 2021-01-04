# [Climb Stairs](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/3.%20Recursion/climb_stairs/climb_stairs.md)

### Objective

We need to find the number of ways in which we can get to the second floor where we can take one step or maximum two steps.

### Intuition

We can see that

- From (n-1)th step we can move in one way only(take 1 step) 
- From (n-2)th step we can move in two ways(take two 1 step or take one 2 step) 

ALso if the number of steps is less than or equal to one, then there are exactly one step to reach the second floor.

### Approach

We can use a recursive function to solve the problem.

Since we can take 1 or two steps at a time, the number of ways to reach the n'th stair, would be the sum of the number of ways to reach the (n-1)th and (n-2)th stair. 

```
  num_of_steps(n) =  num_of_steps(n-1) + num_of_steps(n-2)
```

The base case of the above recursive function would be, when n is less than or equal to 1, where we return zero.

Time Complexity - O(n) <br>
Space Complexity - O(n) <br>


You can find my solution [here](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/3.%20Recursion/climb_stairs/climb_stairs_harikrishnan.cpp)
