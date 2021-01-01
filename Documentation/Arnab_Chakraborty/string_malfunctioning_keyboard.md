# Malfunctioning Keyboard
[**Problem Link**](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/2.%20String/malfunctioning_keyboard/malfunctioning_keyboard.md)

*Here we are given a String where each normal character gets printed only 1 at a time,but malfunctioning characters gets printed*
*twice at a time.We have to determine those normal characters.*
*Here the best approach is first convert the string to an array of characters.Then we start taking 2 characters at a time,and start checking*
*whether they are equal or not,if yes,then increment j by 2, else we take one of that character as the normal character.*
*At the end since by incrementing by 2,we might miss the end index,hence we take a separate case to check the value at*
*end index to be normal or malfunctioning.*
*In all these we use the Data Structure Set, so that the character stored are unique.*

**Time Complexity-O(N)**

**Space Complexity-O(N)**

[**Code Link**](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/2.%20String/malfunctioning_keyboard/MalfunctionKeyboardArnab.java)

