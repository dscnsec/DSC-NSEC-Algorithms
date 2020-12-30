
# [Beanpole Cut](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/7.%20Dynamic%20Programming/beanpole_cut/beanpole_cut.md)

### Objective

To find the maximum number of coins obtainable by cutting the beanpole.

### Intuition

A naive solution for this problem is to generate all possiblities of different pieces and find the highest priced possiblity. But this approach would take exponential time complexity.<br>
As this problem possess both Overlapping Subproblems and Optimal Substructure properties we can use Dynamic Programming.

### Approach

Inorder to find the maximum coins that can be obtained by cutting a rod of lenth n, we can calculate the maximum of (price of a smaller(cut) pole + the maximum oins obtained by the remaining pole.<br>
We can store the values in a dp array such that dp[i] contains the maximum coins that can be made from a beanpole of length 'i'. We can store the values in an array in a bottom-up manner. The following formula is used:
```
   dp[i] = max(dp[i],P[j] + dp[i-j-1]) for j = 0 to j < i ; for i = 1 to i <= n.
```

Here dp[i] represents the maximum coins that can be obtained by cutting a beanpole of length'i'.

<br><br>
Time Complexity - O(n^2) <br>
Space Complexity - O(n) <br>


You can find my solution [here](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/7.%20Dynamic%20Programming/beanpole_cut/beanpole_cut_harikrishnan.cpp)

