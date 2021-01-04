# [Priority Tasks](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/4.%20Stack/priority_tasks/priority_tasks.md)

### Objective

To find the Next Greater Element of a circular array

### Intuition

The problem belongs to the famous category of Next Greater Element problems, where we use a stack.<br>
Also one of the prominent way of solving questions involving Circular Array is by considering them as an array of twice the size. i.e by concatenating the array with itself. 

### Approach

We can implement the array concatenation effect by making use of the modulus operator.<br>
Traverse the array from i = 0 to (2*size of the array). Store the next greater element of each element in a vector. <br>
The algorithm used is similar to the algorithm used to solve the Next Greater Element of an array.

Time Complexity - O(n) <br>
Space Complexity - O(n) <br>

<br>
You can find my solution [here](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/4.%20Stack/priority_tasks/priority_tasks_harikrishnan.cpp)
