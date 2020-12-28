# Find Minimum

[Problem link](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/4.%20Stack/find_min/find_min.md)

We need to find the sum of minimum of every subarray of an array.<br>
For any element x, the number of subarrays for which it will be minimum is ```(number of elements on it's left >x)*(number of elements on its right >x)```<br>
So we will use 2 stacks, the 1st one will store elements from the left, the 2nd from the right.<br>
When we find any element x, we will pop out all indices whose value is >x.<br>
The index currently at the top will have the smallest element which is closest to x in the array from the left.<br>
Now in case the element does not have any smaller values to its left, we will add a -1 to the top of the stack, so <br>
`number of subarrays=(current index)-(stack top)`<br>
We will do the same for right too.<br>
And we will keep an array to store these subarrays, and for any index value at array will be ``(subarrays to the left)*(subarrays to the right)``.

Now suppose our array is `1 1 1`.<br>
By our logic the answer will be `3`, but correct answer is `6`.<br>
This is because we are considering only the larger values, and so subarrays with equal values are avoided.<br>
To prevent this, we will tweak our condition for left stack.<br>
Instead of removing larger values, we will remove values which are larger or equal to the given value.<br>
Thus the final difference will have all possible subarray count.<br>

Note that we can change the condition for either stack but **do not** change condition for both the stacks, as in that case, the subarrays will be counted twice.<br>
Finally, after we have counted subarrays, our answer will be-<br>
![](https://github.com/m-e-r-l-i-n/DSC-NSEC-Algorithms/blob/documentation/Documentation/Tamonash_Chakraborty/dependencies/img-37950aa46edd0985.png)<br>
where `M=1000000007`

Time complexity-O(n)<br>
Space complexity-O(n)
The code can be found [here](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/4.%20Stack/find_min/find_min_merlin.cpp).
