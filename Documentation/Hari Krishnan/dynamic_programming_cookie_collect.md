# [Cookie Collect](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/7.%20Dynamic%20Programming/cookie_collect/cookie_collect.md)

### Objective

We need to find the maximum cookies that can be collected from a square shaped matrix.

### Intuition

Here, all the values are positive so we need to travel through maximum values. <br>
Since we can only move right(or right-up or right-down), we begin from any row in the first column and end in any row in the last column.<br>
We can fill a dp matrix from the last column to the first in an Dynamic Programming way and the maximum value among the values in the first column.<br>
Also we need to consider the constraints like we cannot goto right-up from first row and right-down from last row and to the right-side of the last column.<br>
We can use Dynamic Programming to solve the same.

### Approach

Here  we use an array 'dp' to store the intermediate results (maximum cookies collected from last column till that column). We can fill this 2-D array in a bottom-up manner.<br>
We start traversal from the last column of the square shaped matrix to the first column and in each column we traverse from the first row to the last row.<br>
Then we store the value of the right, right-up, right-down cells in the square shaped matrix. Then we store the value of dp[i][j] as per the below equation
```
dp[i][j] = cook[i][j] + max(right,max(rightup,rightdown));
```

Now we check which cell in the first column contains the maximum cookies and that amount is the answer
<br><br>

Time Complexity - O(n*n) <br>
Space Complexity - O(n*n) <br>


You can find my solution [here](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/7.%20Dynamic%20Programming/cookie_collect/cookie_collect_harikrishnan.cpp)
