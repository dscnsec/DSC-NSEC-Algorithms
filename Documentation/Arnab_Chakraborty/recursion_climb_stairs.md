# Climb Stairs
[**Problem Link**](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/3.%20Recursion/climb_stairs/climb_stairs.md)

*This is a very common problem where its given that there are N stairs and we can climb 1 or 2 stairs at a time,so by how many ways we can*
*reach stair N*
*We can easily solve it in a recursive dp approach.We can reach N stairs from N-1 stairs in 1 manner and we can reach N stairs from N-2 th stair in 1 manner. Therefore,*
*f(N)=f(N-1)+f(N-2) thats what the combinatories say.Its just a fibonacci sequence. Just solve it using recursion*

**Time Complexity-O(N^2)**

**Space Complexity-O(1)**

[**Code Link**](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/3.%20Recursion/climb_stairs/ClimbStairsArnab.java)
