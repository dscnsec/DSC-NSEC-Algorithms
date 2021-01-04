# Pattern
[**Problem Link**](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/3.%20Recursion/pattern/pattern.md)

*Its a Very basic question of printing a right angled triangle pyramid using Recursion*
*Just the approach we use in for loop,we would convert it into recursive.Two functions would be required ,one function to change the rows and update n and one function to print values in a* 
*single row*
*In the solve function where we are printing the rows, we are passing the maximum value in that row as parameters and decresing*
*recursively uptill 1 and then printing from the lowest value that is 1*
*The pattern function just calls the solve function,then updates the row and the maximum element in that row recursively*
*Just what we do using 2 for-loops here we ae doing in two recursive functions*

**Time Complexity-O(N^2)**

**Space Complexity-O(1)**
*(Although in Recursion it uses stack call,so values get assigned in the form of*
*a stack,so some space gets occupied there)*

[**Code Link**](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/3.%20Recursion/pattern/PatternPrintingArnab.java)
