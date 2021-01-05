# Weird Sorting
[Problem](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/1.%20Array/weird_sorting/weird_sorting.md)  
[Source code](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/1.%20Array/weird_sorting/%5BCPP%5D%20weird_sorting_csubhradipta.cpp)  
## Explanation
Here, our task is to sort the array in O(n) space and time complexity.  

The array is in combination of 7, 14 and 21.  
So, we will count number of 7, 14 and 21 present in the array.  
Then we will put all the 7s in front, then all 14s and at last all 21s.  
Here,  
count7 = number of 7  
count14 = number of 14  
count21 = number of 21

```cpp
for (int i = 0; i < n; i++){
		if(count21 != 0){
			if(count14 != 0){
				if(count7 != 0){
					nums[i] = 7;
					count7--;
				} else {
					nums[i] = 14;
					count14--;
				}
			} else {
				nums[i] = 21;
				count21--;
			}
		}
	}
```
So, we got our sorted array within O(n) space and time complexity.  

 ## Space & Time complexities
Space Complexity: &emsp;O(n)
Auxiliary Space :  O(1)  
Time &nbsp;Complexity: &emsp;O(n)

