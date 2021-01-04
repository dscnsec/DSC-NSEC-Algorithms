# Lucky Pairs
[**Problem Link**](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/7.%20Dynamic%20Programming/lucky_pairs/lucky_pairs.md)

*This is a very common DP problem of finding the length of the longest common subsequence and then checking if its length is greater than half the length of the maximum of 2 strings.*
*In this problem we would proceed by creating a lcs[][] array(as done in a DP) problem which will store the common subsequence length from*
**X[0-->i-1]** 
*and* 
**Y[0-->j-1]**
*where X and Y are 2 strings.Now the starting of lcs[0][j] or lcs[x][0] is always zero as there is no character in any one string*
*After that we take 1 character from x and start checkinh the entire length of y to see if its matching,if matching then we add 1 to* 
*the previous index value and store it in L[i][j] and if at indices characters are not matching we just take the maximum of*
*of the integers(one integer is the the same index of 1 string and 1 index before of other string and vice versa, this is because no characters*
*are matching hence it will attain maximum of the 2 integers,and we want maximum,hence doing max).In this way we continue,At the* 
*end at lcs[m][n] we get the largest common subsequence of 2 strings.Now check for the required condition.*

**Time Complexity-O(M*N)**

**Space Complexity-O(M*N)**

[**Code Link**](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/7.%20Dynamic%20Programming/lucky_pairs/LuckyPairsArnab.java)

