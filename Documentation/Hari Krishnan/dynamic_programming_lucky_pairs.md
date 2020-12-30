# [Lucky Pairs](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/7.%20Dynamic%20Programming/lucky_pairs/lucky_pairs.md)

### Objective

To check if length of the common subsequence between the 2 is greater than or equal to half the length of the larger string between the pair.

### Intuition

This problem contains two parts. They are as follows:<br>
- To compute half the length of the larger string.
- To find the lowest common subsequence of the given strings.

For the second part we can use Dynamic Programming.

### Approach

We need to find the length of the two strings, find the string with the maximum length and then divide it by two and store it in a variable 'len' <br>
We need to construct the dp table in a Bottom Up(Tabulation) manner. Here dp[i][j] contains the lcs of s1[0..i] and s2[0..j] pair of strings <br>

We fill the the table in the following way,
- When the size of one of the string is zero, lcs is 0
- When the last element of both string is equal, lcs is the lcs of the pair of strings excluding last element from both
- Else take the maximum of the lcs when the last element in either of the string is excluded

<br>
And Finally, check whether the LCS of the given pair of strings is larger than the variable 'len' and print "YES" or "NO" accordingly.
<br> <br>
Time Complexity - O(n^2) <br>
Space Complexity - O(n^2) <br>

<br>

You can find my solution [here](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/7.%20Dynamic%20Programming/lucky_pairs/lucky_pairs_harikrishnan.cpp)
