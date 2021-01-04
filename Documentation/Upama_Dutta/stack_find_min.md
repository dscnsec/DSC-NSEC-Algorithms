# Find_min

question can be found here : <a href="https://github.com/chaltidutta/DSC-NSEC-Algorithms/tree/master/4.%20Stack/find_min"> here </a> <br>
Answer can be found here : <a href="https://github.com/chaltidutta/DSC-NSEC-Algorithms/blob/master/4.%20Stack/find_min/find_min_upama.cpp">here </a><br>

the intution behind the algorithm is to find the  sum of the number of  subarrays multiplie minimum element of that subarray.
so to find the total number of subarrays we need to find out the larger 
element in left of i th value of the array and larger value in right of i th value of the array. 

after that make two arrays which will contain the right larger elements and left larger elements such that left[i]+1 = the number of subarrays ending with A[i] and A[i] is * * only single minimum, similarly for the right array.

then at last, find the and by multiplying the all i * th value of right array and left array element.
<br>

Time Complexity-O(n)  
Space Complexity-O(n)