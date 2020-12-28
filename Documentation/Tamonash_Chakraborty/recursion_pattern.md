# Pattern

[Problem link](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/3.%20Recursion/pattern/pattern.md)

This is probably the easiest problem over here.<br>
We have to just print 1-i for the i't line, i ranging from 1 to n.<br>
This can be done easily with a nested for loop.<br>
However, this has to be done recursively, so we replace the outer for loop with a recursive formula.<br>
For every i, we print the line, and check if i<n-1.<br>
If it is, we call our recursive function for the next value of i.<br>
Otherwise, we abstain from calling the function.

Time complexity-O(n^2)<br>
Space complexity-O(n)

The code can be found [here](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/3.%20Recursion/pattern/pattern_merlin.cpp).
