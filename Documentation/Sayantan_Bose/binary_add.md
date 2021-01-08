# Binary Add
[**Problem Link**](https://github.com/dscnsec/DSC-NSEC-Algorithms/tree/master/2.%20String/binary_add)
[**Code Link**](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/2.%20String/binary_add/binary_add_sayantan.cpp)



Approach used :
We started adding bitwise adding from the left hand size. Now the idea is thatif there is no carry then add the two
binary digit and store the sum and if a carry is generated it is moved forward to the right hand side and is added with
the next bit and then the entire binary digit sum is printed at the last.

Time Complexity : O(first + second), first = size of first string and second = size of second string
Space Complexity : O(n)