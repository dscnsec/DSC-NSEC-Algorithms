# Climb Stairs
[**Problem Link**](https://github.com/dscnsec/DSC-NSEC-Algorithms/tree/master/3.%20Recursion/climb_stairs)
[**Code Link**](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/3.%20Recursion/climb_stairs/climb_stairs_sayantan.cpp)



Approach Used : 
we use a recursive technique here in which when the crewmate want to reach nth stair from either (n-1)th stair or(n-2) stair. So for each n stair
we find the total number of ways to reach (n-1)stair and (n-2) stair and then add them to get the answer of nth stair

Time Complexity : O(2^n)
Space Complexity : O(1) 