# Unique Character

[Problem link](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/2.%20String/unique_char/unique_char.md)

Find the index of the first character that is present only once in the array.<br>
We will use a simple yet efficient observation for this.<br>
Suppose we take an array, and when we find the character for the 1st time, we assign the index value(1-based) to the array.<br>
Every next time we find the value, we subtract it from the said position in the array.<br>
Suppose we have ```aa``` as our string.<br>
```a``` appears twice, so 1st time we assign 1 to ```a```, then when we encounter ```a``` again, we subtract 2 from 1.<br>

Thus for any value which appears multiple times, the value stored will be negative.<br>
If it appears only once, the value will be positive.<br>
Our answer has to be in 0-based, so it will be min(all values>0)-1.<br>
If we do not find any value appearing only once, we output -1.

Time complexity-O(n)<br>
Space complexity-O(x) where x=26

The code can be found [here](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/2.%20String/unique_char/unique_character_merlin.cpp).

