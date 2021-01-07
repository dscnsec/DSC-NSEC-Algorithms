# Save Yourself
[**Problem Link**](https://github.com/dscnsec/DSC-NSEC-Algorithms/tree/master/8.%20Backtracking/save_yourself)
[**Code Link**](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/8.%20Backtracking/save_yourself/save_yourself_sayantan.cpp)


Approach Used :
The main function does not contain any logic it is only used for calling other functions and taking the input.
The function partition then generates all palindromic substrings of the inputted string and stores it in a vector.
Each of the substrings is checked if palindrome or not and returned.Then the function substrings goes through all the
indexes and recursively add remaining substrings if the current string is palindrome. Atlast the vector storing the palindromic substrings is printed.

Time Complexity : O(n^2)
Space Complexity : O(n)