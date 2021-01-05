# Case Game
[**Problem Link**](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/8.%20Backtracking/case_game/case_game.md)

*Here we are given an Alphanumeric string*
(A string consisting of both numbers and letters)
*and we are asked to print all possible combinations of the string with altering the characters in their upeer and lower cases*
**(Only the letters,digits remain as it is)**
*So here we would use the concept of backtracking to solve it.We would try to make a list of all available strings(Initiating with a null string)*
*Then iterate through thw string using a loop.As soon as a character is encountered check if its upper case or lower case.If upper case*
*then convert to lowercase,else convert to uppercase, and if its a digit leave it as it is.Then add the updated character to every*
*element in the list.And then at the end of the loop,refer the address of the update list to the main list so that it contains all changes.*

**Time Complexity-O(2^N)**

**Space Complexity-O(2^N)**
*(as we are printing all combinations of a string)*

[**Code Link**](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/8.%20Backtracking/case_game/CaseGameArnab.java)
 