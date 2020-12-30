# [Destroy Asteroid](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/4.%20Stack/destroy_asteroid/destroy_asteroid.md)

### Objective

To find out the state of the asteroids after all collisions.

### Intuition

Given the sizes of the asteroids and the direction in which they move, indicated by signs, +ve means moving right and -ve means moving left. 
Now we can consider all the possible movements of any two asteroids,

- Two asteroids moving the same direction won't collide.
- Also, two asteroids divering each other won't collide. That is when a negative asteroid from left side and positive asteroid from right side.
- The only case in which, the asteroids would collide is when a positive asteroid from left side approaches a negative asteroid from the right side.

Also, inorder to store the asteroids and to know which is the asteroid before the asteroid we consider, we can maintain a stack. 


### Approach

We have the asteroids in a vector. Now we can traverse the vector from beginning to the end. <br>
A positive asteroid can just be pushed into the stack as it cannot collide with previous asteroid regardless of previous one's direction. <br> 
Else if it is a negative asteroid, Collision still does not occurs, if the previous asteroid is moving to left

<br>
If the previous asteroid in the above case is moving to right, collision occurs and the one with a bigger size stands, in case if both are of equal sizes
both collides and none stands. After collision, there will be again collision only if the next previous asteroid is moving right.

<br> <br>
Time Complexity - O(n) <br>
Space Complexity - O(n) <br>


You can find my solution [here](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/4.%20Stack/destroy_asteroid/destroy_asteroid_harikrishnan.cpp)
