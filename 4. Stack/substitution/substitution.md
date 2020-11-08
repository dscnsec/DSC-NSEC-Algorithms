# Substitution

In admin, the password to swipe the card in the wallet on the draw frame is "abc". But the notorious impostors altered password to create trouble for the impostors. However, the card can still be accepted if it fulfills the following condition

- Let X="abc". It can be divided in 2 parts X(left) and X(right). X(left) is a substring of X of any length and X(right) is the remaining string of X. Hence, X(left)+X(right)=X. If the password is in the form of X(left) + "abc" + X(right), the card can be accepted.
  Note that it is not necessary that the previous operation is carried out only once. It can be carried out any number of times.
  You task is to find out if the card can be accepted or not.

## Input

- The first line of the input contains a single integer T denoting the number of test cases. T test cases folows
- The first line of each test case contains a single digit N
- The next line contains a string S

## Output

- For each test case, print "YES" (without quotes) if the card can be accepted, else print "NO" (without quotes)

## Example Input

3
aabcbc
abcabcababcc
abccba

## Example Output

YES
YES
NO

## Explanation

- In test case 1, the string can be formed by a+abc+bc, where X(left)=a and X(right)=bc
- In test case 2, the string can be formed by abc+abc+ab+abc+c,where X(left)=ab and X(right)=c
