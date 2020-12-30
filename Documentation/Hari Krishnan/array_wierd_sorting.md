# [Weird Sorting](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/1.%20Array/weird_sorting/weird_sorting.md)

### Objective

To sort an array containing '7', '14', '21' as its elements in non-decreasing order.
 
### Intuition

This problem is a variation of the famous [Dutch National Flag Problem](http://users.monash.edu/~lloyd/tildeAlgDS/Sort/Flag/). The problem is closely related to the partition 
algorithm of Quick Sort. We can do 3-way partitioning here. We can divide the array into four sections comprising of '7', '14' , '21' and the unknowns. 
  

### Approach
 
We partition the array into four sections(containing the three elements and a section comprising of the unknown elements), and beg, mid are the start positions of the first two sections(comprising of '7's and '14's), and end is the end position of the last section(comprising of '21's).<br><br>
We can then traverse the array while(mid <= end) i.e. through the section of the unknowns and keep each element in its to its right position. Each time we consider the mid element. 
There are three possiblities, they are when the mid element is :

<ul>
<li> <strong>7</strong> - Swap the element with beg position and increment beg, mid.</li>
<li> <strong>14</strong> - Just increment mid, as 14 belongs to the mid section itself.</li>
<li> <strong>21</strong> - Swap the element with the element in end position and decrement end.</li>
</ul>
<br>
After the completition of the above process we get our array sorted in non-decreasing order.<br>
Time Complexity - O(n)<br>
Space complexity-O(1)<br>

You can find my code [here](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/1.%20Array/weird_sorting/wierd_sorting_harikrishnan.cpp)<br>
