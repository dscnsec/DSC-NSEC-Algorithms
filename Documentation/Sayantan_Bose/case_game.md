# Case Game
[**Problem Link**](https://github.com/dscnsec/DSC-NSEC-Algorithms/tree/master/8.%20Backtracking/case_game)
[**Code Link**](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/8.%20Backtracking/case_game/case_game_sayantan.cpp)



Approach Used :
The inputed string is converted to a vector and passed on the function checks if the index stores an alphabet or number and executes accordingly.
if it stores an alphabet the function changes case and recursively calls the function itself. same goes for a number except for changing the case.

Time Complexity : O(2^n)
Space Complexity :O(n)