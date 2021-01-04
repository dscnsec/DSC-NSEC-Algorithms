# Destroy Asteroid

[Problem link](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/4.%20Stack/destroy_asteroid/destroy_asteroid.md)

Asteroids will collide only when they are travelling in opposite direction.<br>
So we fix a direction first.<br>
Let us consider asteroids coming from left. We consider them because their values are positive.<br>
We will add them in a stack.<br>
When we encounter an asteroid travelling in the negative direction we can do 2 things:<br>
- As long as the stack top is positive and its absolute value is less than the value of the current asteroid, we remove them.<br>
If the stack is empty, or the top of the stack is negative, we add the value to the stack.
- If the absolute value at the top of the stack is same (but sign opposite) we will remove both of them.<br>
So we will pop the top of the stack, and we will not push our current element as well.
  
Our answer will be the elements present in the stack after all iterations have been made.<br>
Note that since the elements are stored in LIFO(Last In First Out), we will have to print our answer in reverse order.<br>

Time complexity-O(n)<br>
Space complexity-O(n)

The code can be found [here](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/4.%20Stack/destroy_asteroid/destroy_asteroid_merlin.cpp).
