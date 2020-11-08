# Rotate Word

As soon as one of your fellow crewmates enters the admin, he notices 2 strings. The instruction says that the 2 string are supposed to be identical but to create trouble for the crewmates, the impostors disrupted the arrangement of the letters of the second string. One of the following 2 operations can be performed on the second string only once:

1. Find the pivot and rotate the string clockwise
2. Find the pivot and rotate the string anticlockwise
   It needs to be found out if the first string can be obtained from second by performing either of the 2 operations.
   Your crewmate needs your help in this task. Can you help him?

## Input

- The first line of the input contains a single integer T denoting the number of test cases. T test cases folows
- The first line of each test case contains two space generated string, X and Y

## Output

- For each test case, print "YES" if it is possible to obtain X from Y by rotating the string on a pivot either clockwise or anticlockwise, else print "NO"

## Example Input

2
amazon azonam
amazon onamaz

## Example Output

YES
YES

Explantion
azonam when rotated anti-clockwise along n gives amazon
onamaz when rotated clockwise along n gives amazon
