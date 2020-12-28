# Climb Stairs

[Problem link](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/3.%20Recursion/climb_stairs/climb_stairs.md)

We have to calculate number of ways to reach from 0'th step to n'th step in a staircase if we can move 1 or 2 steps at a time.<br>
Let us consider a generalized formula for any step i.<br>
Number of ways to reach n'th step from i'th step=number of ways to reach n'th step from (i+1)'th step+number of ways to reach n'th step from (i+2)'th step<br>
Now this is a recursive formula.<br>
So it must have edge cases too, to prevent infinite recursion.<br>
Here, our edge cases are-
- If ```i==n-1```, then we can move in only 1 way
- If ```i==n-2```, then we can move in 2 ways 

Time complexity-O(n^2)<br>
Space complexity-O(1)<br>
note:<br>
In case one wants to get an O(n) time complexity he can use memoization so that values for same steps are not calculated more than once.<br>
However, in this case, the space complexity would go up from O(1) to O(n).<br>

The code can be found [here](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/2.%20String/unique_char/unique_character_merlin.cpp).

