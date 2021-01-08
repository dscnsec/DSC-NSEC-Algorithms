# grouping
[**Problem Link**](https://github.com/dscnsec/DSC-NSEC-Algorithms/tree/master/5.%20Linked%20List/grouping)
[**Code Link**](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/5.%20Linked%20List/grouping/grouping_sayantan.cpp)


Approach Used :
We will be using the a pointer middle which will only increment itself when the count becomes odd . The count increases in every increment of the head pointer to the next value. This will ensure that the middle pointer will move half the list while the head pointer traverse the whole array

Time Complexity : O(n)
Space Complexity : O(n)s