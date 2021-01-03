# Create Sum

[Problem link](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/8.%20Backtracking/case_game/case_game.md)

We are given n numbers, and a target sum, we have to find number of ways to get sum if the same number can be used multiple times.<br>
We will use a function to print all the possible arrangements. This function will take mainly 2 parameters-<br>
* The starting index
* The current sum
* The target sum

We will take a number, add it to the stack, and then make a recursive call using the current index, updated current sum and target sum.<br>
Note that we will add the number only if `current sum+this number<=target sum`.<br>
If we have reached an arrangement where the sums are equal, we will print the current arrangement.<br>

Time complexity-O(c^n) where c is count of numbers and n is target sum<br>
Space complexity-O(m*c) where m is maximum number of possible combinations

The code can be found [here](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/8.%20Backtracking/create_sum/CreateSumMerlin.java).
