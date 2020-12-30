# Rotate Word

[Problem link](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/2.%20String/rotate_word/rotate_word.md)

The problem asks us to check if word 2 can be obtained by rotating word 1 clockwise or anticlockwise.<br>
Here is an interesting observation.<br>
Let us consider the word ```amazon```<br>
Let us assume pivot is ```z``` and thus ```x=ama``` ```y=zon```<br>
Now, we can see that the word is ```x+y```, so if it is rotated clockwise it will be ```y+x```.<br>
If it is rotated anticlockwise, it will also be ```y+x```.<br>
Thus, we can see that clockwise or anticlockwise rotation doesn't matter at all.<br>

Now the problem is reduced to check if string 2 can be found by cyclically moving about string 1.<br>
For cyclic structure, we add string 1 after string 1, which means<br>
```amazon``` becomes ```amazonamazon```.<br>
Now we just have to check if string 2 is a substring of string 1.<br>

Since the constraints are low, we can use a bruteforce solution for the substring checking.<br>
For O(n) solution of the problem, we can use [KMP Algorithm](https://www.geeksforgeeks.org/kmp-algorithm-for-pattern-searching/).

Time complexity-O(n^2)<br>
Space complexity-O(n)

The code can be found [here](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/2.%20String/rotate_word/rotate_word_merlin.cpp).

