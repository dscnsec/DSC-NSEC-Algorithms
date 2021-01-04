# [Push Zero](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/1.%20Array/push_zero/push_zero.md)

### Objective

To push all the zeros in an array to its end, without changing the order of the non-zero elements.

### Intuition

We need all the zeros present in the array to be pushed to its end part, without changing the order of the non-zero elements. We can store all the non-zero elements that appear 
in the array in that order and then fill the rest of the spaces with till the end of the array. In this way we can do it in just one traversal. Also we may use the array itself to
store the non-zero elements(in order) and we needn't use any extra space.

### Approach

Initialize a counter cnt with 0
Then traverse the array and store all the non-zero elements in the cnt index, while incrementing the cnt index each time its used.
In this way, we occupy all the non-zero elements of the array(in its order) in the starting of the array.
Now compare cnt with the size of the input array, and while its less than the size, occupy those indices of the array with 0.


You can find my solution [here](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/1.%20Array/push_zero/push_zero_harikrishnan.cpp)
