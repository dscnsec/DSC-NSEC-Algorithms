# find min
[**Problem Link**](https://github.com/dscnsec/DSC-NSEC-Algorithms/tree/master/4.%20Stack/find_min)
[**Code Link**](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/4.%20Stack/find_min/find_min_sayantan.cpp)


Approach Used : 
We will be making two array one for the left and the other for the right .The left one will store the length
of strictly larger number and the right will store the length of the larger number on right
left[i] + 1 equals to the number of subarrays ending with a[i], and a[i] is only single minimum.
Similarly,right[i] + 1 equals to the number of subarrays starting with a[i],and a[i] is first minimum.
(left[i])*(right[i]),equals total number of subarrays in which a[i] is minimum.

Time Complexity : O(n)
Space Complexity : O(n)