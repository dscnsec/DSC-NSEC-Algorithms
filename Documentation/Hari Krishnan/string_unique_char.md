# [Malfunctioning Keyboard](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/2.%20String/unique_char/unique_char.md)

### Objective

Given a string containing only alphabets, and we have to find the index of the first character in the string which appears only once throughout.

### Intuition

We can create a structure that stores the count and (largest) index of every element in the string. Then the element with count = 1 and having the lowest index will be the required
unique character.

### Approach

Define a structure with two data members of integer type named count and index for keeping the count and index of each alphabet in the string. Declare an array of structures.
Traverse the string from the beginning to the end, and keep a count of its occuring elements and index. Now traverse through the array of structures and find the element with 
count = 1 and has the smallest index.


Time Complexity - O(n) <br>
Space Complexity - O(n) <br>


You can find my solution [here](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/2.%20String/unique_char/unique_character_harikrishnan.cpp)
