# Spring Throw
[**Problem Link**](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/7.%20Dynamic%20Programming/spring_throw/spring_throw.md)

*This is DP problem where we are given an array of spring and blocks with their ranges of throws and we have to calculate the minimum number of spring throws required to reach the end of the blocks*
*In this problem we would go in a predefined manner.Just check for every spring whats the maximum distance it can send the person,in this way update the current position,and keep* 
*on calculating max.When j reaches that current position,one cycle of spring throw is completed,hence update the count by 1*
*And then make current to the next maximum uptill then.That's how it will continue uptill n-1.As there it will always be ending* 
*at the last block by any means.But in the meatime if max distance reaches n, we will just update count by 1 and break.*

**Time Complexity-O(N)**

**Space Complexity-O(1)**

[**Code Link**](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/7.%20Dynamic%20Programming/spring_throw/SpringThrowArnab.java)
