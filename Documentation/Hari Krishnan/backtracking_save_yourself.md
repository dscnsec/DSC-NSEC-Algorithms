# [Save Yourself](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/8.%20Backtracking/save_yourself/save_yourself.md)

### Objective

To partition the given string into substrings, such that all the substrings are palindrome.

### Intuition

We would need a helper function to check if a string is palindrome or not.<br>
We need to check all the possiblities of the string being partitoned into substrings which are all palindrome. <br>
And the same can be done with a recursive backtracking function.

### Approach

Define a helper isPalindrome function to check if a string is palindrome or not.<br>
Define a recursive backtracking function that takes a string, a vector of string type and an index as its argument. A vector of string type is used to store the substrings that are palindrome.
Inside the function, do the following:

- Check if the traversal has reached the end index and the 'ans' vector contains atleast one palindrome substring, if True then print those strings in vector space-separetedly followed by a newline and Return from the function.
- Then Begin the traversal from the start index, as the elements before it(if any) has been identified as palindrome and is stored in ans.
- Include the current considered character in the temp-string and include it in the answer vector, if it is a palindrome, Else continue the traversal.
- Next, backtrack and find all combinations of palindrome substring, including the palindrome string 'tmpstr'
- Now, remove the last string from the vector and continue the traversal

Time Complexity - O(n*2^n) <br>
Space Complexity - O(n) <br>


You can find my solution [here](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/8.%20Backtracking/save_yourself/save_yourself_harikrishnan.cpp)
