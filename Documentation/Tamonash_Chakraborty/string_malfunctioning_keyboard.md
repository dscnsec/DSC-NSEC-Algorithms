# Malfunctioning Keyboard

[Problem link](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/2.%20String/malfunctioning_keyboard/malfunctioning_keyboard.md)

The problem asks us to find the alphabets in a keyboard which can be added to the string odd number of times.<br>
The approach is very simple.<br>
Iterate through the string.<br>
Find the length of every set of consecutive characters in the string.<br>
If the length is odd, it means this key works.<br>
So we keep a boolean array to denote which keys work.<br>
When we find a key that works, we mark the value as true.<br>
Our answer will be all the characters whose boolean values have been marked as true.<br>

Time complexity-O(n)<br>
Space complexity-O(x) where x=26<br>
note that marking can be done using bit manipulation as well, and it would take O(1) space in that case.<br>

The code can be found [here](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/2.%20String/malfunctioning_keyboard/malfunctioning_keyboard_merlin.cpp).

