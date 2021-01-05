# Push Zero
[Problem](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/1.%20Array/push_zero/push_zero.md)  
[Source code](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/1.%20Array/push_zero/%5BCPP%5D%20push_zero_csubhradipta.cpp)  
## Explanation
Here, our task is to push the zeroes to back of the array.  

So, our approach will be - 
While traversing, whenever we encounters a zero, shift all the next elements to their previous index and set the last position of array with zero.  

```cpp
for (int i = 0; i < n; i++){
	if (nums[i] == 0){
		j = i;
		while( j != n){
		
			// shift elements to left by one step
			
			nums[j] = nums[j+1];
			j++;
		}
		nums[n-1] = 0;		// put zero to last
	}
}
```



 ## Space & Time complexities
Space Complexity: &emsp;O(n)  
Time &nbsp;Complexity: &emsp;O(n<sup>2</sup>)

