# Case Game

[Problem link](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/8.%20Backtracking/case_game/case_game.md)

We are given a string, and we have to print all possible combinations of the string, by changing a character to uppercase and lowercase.<br>
This is a backtracking problem, but we can solve it iteratively instead of recursion.<br>
We will store our result in a list, let us call it as `res`.<br>
We will first add `""`(an empty string) to res.<br>
Now for any index, we will make a new temporaty list as `tem`.<br>
We will do the following things-
* We will add the current character to every string currently present in res, and add the resulting strings to tem
* Now, if the character is an alphabet, we will change its case.
* If the character is an alphabet and its case has been changed, we will add this changed character to every string in res, and add the new strings to tem.

So now, tem has all the updated strings, and we will delete res, and mark tem as res.<br>
res after all indices have been iterated upon holds our answer.

Time complexity-O(2^n)<br>
Space complexity-O(2^n)

The code can be found [here](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/8.%20Backtracking/case_game/CaseGameMerlin.java).
