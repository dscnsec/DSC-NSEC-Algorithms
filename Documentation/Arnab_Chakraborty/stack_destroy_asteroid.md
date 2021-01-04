# Destroy Asteroid
[**Problem Link**](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/4.%20Stack/destroy_asteroid/destroy_asteroid.md)

*In this problem, an array of asteroid sizes are given with positive values indicating asteroids are travelling towards right*
*and negative values indicating asteroids are travelling towards left.We are asked to find to find the final state of the asteroids*
*,that is,which asteroids will remain still in space*
*This problem is a bit tricky and we would require stack here because only stack can control the destroy and remaining of asteroids*
*in order from left to right*
*Create a stack which will store asteroids travelling in a particular direction,as soon as a asteroid travelling in a* 
*different direction is encountered, compare the peek value of stack with that as to if that asteroid is interferring with the* 
*previous asteroid.If yes,then check which will destroy and which will remain,update the stack accordingly and then proceed*
*After the loop the asteroid present in the stack are the ones to remain after collision.Use a ArrayList to print the* 
*Stack in reverse order.*

**Time Complexity-O(N)**

**Extra Space Complexity-O(N)**
*(For the stack)*

[**Code Link**](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/4.%20Stack/destroy_asteroid/DestroyAsteroidArnab.java)
