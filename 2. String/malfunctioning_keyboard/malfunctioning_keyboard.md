# Malfunctioning Keyboard

**Difficulty: Easy**

You enter the reactor to unlock the manifolds using a keyboard with the usual 26 letters. But you notice that the keyboard is malfunctioning. When you press a letter _X_, one of the following events happen:

- If the button is working correctly, a single character _X_ gets printed at the end of the string.
- If the button is **not** working correctly, two characters _X_ get printed at the end of the string.

This malfunctioning must be complained and hence you need to find out the letters which are working correctly for sure. You may assume that each button works either works correctly for the whole process, or malfucntions for the whole process.

## Input

- The first line of the input contains a single integer T denoting the number of test cases. T test cases folows
- The first line of each test case contains a string S

## Output

- For each test case, print the letters which are working correctly for sure.

## Example Input

4 <br/>
a <br/>
zzaaz <br/>
ccff <br/>
cbddbb

## Example Output

a <br/>
z <br/>
<br/>
bc
