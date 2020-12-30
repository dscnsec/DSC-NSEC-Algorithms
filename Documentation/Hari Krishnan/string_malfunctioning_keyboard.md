
# [Malfunctioning Keyboard](https://github.com/Harikrishnan6336/DSC-NSEC-Algorithms/blob/master/2.%20String/malfunctioning_keyboard/malfunctioning_keyboard.md)

### Objective

Given a string containing only alphabets, and we have to find the alphabets that are certainly working correctly

### Intuition

Every character that cannot be paired with a same letter to its left or right neighbours as itself would be functioning correctly. <br>
Note: A letter can only be paired once. <br>

We may need to mark the letters that are certainly working and can use an array for the same. Also we need to solve the problem in a single traversal and should take care of any
edge cases, such as an empty string.

### Approach

Traverse the string considering each elements. If the current and the next letter is same then go to next's next letter. Else we found a letter that's certainly working correct. <br>
Mark that letter as true in the boolean array. Finally print all the letters with true value in the boolean array. 

You can find my solution [here](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/2.%20String/malfunctioning_keyboard/malfunctioning_keyboard_harikrishnan.cpp)

Time Complexity - O(n) <br>
Space Complexity - O(n) <br>
