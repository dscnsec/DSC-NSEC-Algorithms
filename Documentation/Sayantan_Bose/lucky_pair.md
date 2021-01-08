# Lucky Pair
[**Problem Link**](https://github.com/dscnsec/DSC-NSEC-Algorithms/tree/master/7.%20Dynamic%20Programming/lucky_pairs)
[**Code Link**](hhttps://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/7.%20Dynamic%20Programming/lucky_pairs/lucky_pairs_sayantan.cpp)



Approach Used :
The solve function takes 2 strings as inputs and passes it on to the check function.
The check function is an iterative dynamic programming function which finds whether
the 2nd string is a subsequence of the 1st string or not.A 2-d array stores the results
And at last the condition whether the length of the longest subsequence is greater or equal
to half of the length of the largest string among the two is checked and the results os printed.
The longest string should be inputted first

Time Complexity : O(ab)
Space Complexity : O(n^2)