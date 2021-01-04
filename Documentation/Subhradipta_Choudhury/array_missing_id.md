# Missing ID
[Problem](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/1.%20Array/missing_id/missing_id.md)  
[Source code](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/1.%20Array/missing_id/%5BCPP%5D%20missing_id_csubhradipta.cpp)  
## Explanation
Here, our task is to find the stack number of the missing ID.  

Let stack size be ``n`` and missing id be ``x`` .

We need to find the stack number, so for that, we will take a integer variable ``stackNo`` and initialize it with ``1``  .  

If the missing id ``x`` is 1 or 2, then stack number is 1. So for that, we don't have to find anything as our ``stackNo`` is set to ``1`` already.  

When missing id ``x`` is greater than 2, set ``stackNo = stackNo + ceil((missingID-2) / stackSize)``  .  

The ``ceil()`` function returns the smallest integer value that is bigger than or equal to a number. And thats what we need.

 ## Space & Time complexities
Space Complexity: &emsp;O(1)  
Time &nbsp;Complexity: &emsp;O(1)

