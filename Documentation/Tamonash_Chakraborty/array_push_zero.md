# Push Zero

[Problem link](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/1.%20Array/push_zero/push_zero.md)<br>

The problem asks us to take an array and then place all non zero elements in the front and the zeros after it.<br>
So we can simply use a pointer index to solve our problem in 1 pass.<br>
At first, we initialize our pointer to 0.<br>
After that, whenever we encounter a non zero, we put the non zero element in the position where our pointer is and increment the pointer. Along with it, we set the current index value 
to 0, because some positions will have zeros in our final array, and we need to iterate to fill them again.<br>
So our problem is solved in O(n) time, O(1) space complexities.<br>
The code can be found [here](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/1.%20Array/push_zero/PushZeroMerlin.cpp).
