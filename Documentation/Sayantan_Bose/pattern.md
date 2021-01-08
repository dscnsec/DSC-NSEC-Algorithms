# Pattern 
[**Problem Link**](https://github.com/dscnsec/DSC-NSEC-Algorithms/tree/master/3.%20Recursion/pattern)
[**Code Link**](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/3.%20Recursion/pattern/PatternPrintingSayantan.cpp)



Approach Used : 
In this question we are using two recursive function one for changing the row and the other for printing the number
for the desired pattern. In the printing pattern function we are passing the number of rows and the starting row
and gradually increasing the row number and decreasing the number of row. and in the next recursion function println
we are passing the current row value and a value which initially has a value 1 then we decrease the current row value
and increase the value.

Time Complexity : O(2^n)
Space Complexity : O(1)