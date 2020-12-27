# Missing Id

[Problem link](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/1.%20Array/missing_id/missing_id.md)
The problem asks us to find the stack number of the nth id.<br>

Now, the rules of stacking ids are:
- the first stack will have 2 ids
- all remaining stacks will have x ids

So now, we can easily predict the stack number if n<=2, ie 1<br>
How do we predict the stack number of the remaining ids?<br>
Note that for any id n, the stack number will be the smallest k such kx>=(n-2)<br>
Hence our formula is<br>
![](https://github.com/m-e-r-l-i-n/DSC-NSEC-Algorithms/blob/documentation/Documentation/Tamonash_Chakraborty/dependencies/img-c4001308fb41f1da.png)
<br>
Time complexity-O(1)<br>
Space complexity-O(1)<br>
The code can be found [here](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/1.%20Array/missing_id/MissingIdMerlin.cpp)
