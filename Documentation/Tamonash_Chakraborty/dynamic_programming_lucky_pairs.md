# Lucky Pairs

[Problem link](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/7.%20Dynamic%20Programming/lucky_pairs/lucky_pairs.md)

The problem simply asks us to find longest common subsequence of 2 strings.<br>
In order to find longest common subsequence, we need to form a 2D dp array.<br>
Any cell dp[i][j] denotes the longest common subsequence that can be formed using the 1st i letters of string 1 and 1st j letters of string 2.<br>
The value at any cell dp[i][j] can be calculated by the following ways-<br>
* dp[i][j]=dp[i-1][j-1]+1 if a[i] and b[j] are equal, where `a` and `b` are the two given strings.
* dp[i][j]=max(dp[i-1][j],dp[i][j-1]) if the two indices are not equal,<br>
  This is because we are choosing the maximum value that can be obtained from the previous indices of i and j respectively

Finally, when we have our longest common subsequence, if its size is >=half the size of the larger string, the answer is `YES`.<br>
Otherwise the answer is `NO`.

Time complexity-O(n^2)<br>
Space complexity-O(n^2)

The code can be found [here](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/7.%20Dynamic%20Programming/lucky_pairs/lucky_pairs_merlin.cpp).
