# Weird Sorting
[**Problem Link**](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/1.%20Array/weird_sorting/weird_sorting.md)

*Here we are given an array of integers containg numbers 7,14 and 21 and asked to sort them in non-descending order in* **O(N)** *time*
*and with minimum space complexity.So the best approach here is Here we keep track of 2 indices-left(for 7) and right(for 21) using 2 pointer approach, and then just run a loop from*
*0 to n-1 and swap when 7 and 21 are encountered and just increment i when 14 is encountered.*
*Finally we would achieve the formation which we want as 14 is not altered it would come in the middle.*

**Time Complexity-O(N)**
**Space Complexity-O(1)**

[**Code Link**](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/1.%20Array/weird_sorting/WeirdSortingArnab.java)
