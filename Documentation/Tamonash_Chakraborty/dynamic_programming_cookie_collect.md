# Cookie Collect

[Problem link](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/7.%20Dynamic%20Programming/cookie_collect/cookie_collect.md)

We need to find the maximum number of cookies that can be collected from any given point.<br>
Let us try to see where we can move from any (i,j) of the matrix:
* (i+1,j+1) if i+1<=n and j+1<=m(assuming 1 based indexing and n and m are the number of rows and columns respectively)
* (i-1,j+1) if i-1>0 and j+1<=m
* (i,j+1) if j+1<=m

So, for any index, `dp[i][j]=a[i][j]+max of the above 3 values`, where `a` is our matrix and `dp` is our 2D array.<br>
It is to be noted that we are using a dp array because the time complexity is exponential, and if we compute values for the same position multiple times, it wouldn't work optimally.<br>
Now, we iterate through all the dp[i][j] values in our matrix, and see for which (i,j) our value is maximum. This value is our required answer.

Time complexity-O(n^2)<br>
Space complexity-O(n^2)

The code can be found [here](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/7.%20Dynamic%20Programming/cookie_collect/CookieCollectMerlin.java).
