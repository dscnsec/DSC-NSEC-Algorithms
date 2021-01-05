# 5% Mean
[Problem](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/1.%20Array/5%25_mean/5%25_mean.md)  
[Source code](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/1.%20Array/5%25_mean/5%25_mean_csubhradipta.cpp)  
## Explanation
Here, our task is to find the mean of elements after excluding smallest 5% and largest 5% elements from the given array.  

At first we will sort the given array.

Next we calculate 5% of n(size of array) and store it to a integer variable ``x`` such that, ``x = 0.05 * n``   .  

Now, sum up the element from index ``x`` to ``(n - 1) - x``  .  

Then, for mean, divide the ``sum`` by ``(n - (2 * x))``  .


 ## Space & Time complexities
Space Complexity: &emsp;O(n)  
Time &nbsp;Complexity: &emsp;O(n.logn)

