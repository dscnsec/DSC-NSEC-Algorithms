# Weird Sorting

[Problem link](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/1.%20Array/weird_sorting/weird_sorting.md)<br>

We are given an array with 7, 14 and 21, and we need to sort this array.<br>
We will use a simple 2 pointer approach over here.<br>
The 7s will go the left, and the 21s to the right. We will keep a pointer one, for 7s, and three for 21s.<br>
At any instant, if we find a 7, we will swap it with the last unoccupied position of 7, and increment the pointer.<br>
If we find a 21, we will swap it with the rightmost unoccupied position in the array.<br>
It is to be noted that when we are swapping with a 21, we should not move to the next index, because it may happen that the value that is present in the current position even after
swapping is 21 again.<br>
This will never happen with 7 because we are filling 7s from the left, hence there can never be a secanio where a[i-1]=7 a[i]=14 or 21, a[i+1]=7, after we have sorted the indices.<br>
The pseudocode for that will be-<br>

````java
if(a[i]==7)
{
    a[one]=a[one]^a[i]^(a[i]=a[one]);   
    one++;
}
else if(a[i]==21)
{
    a[three]=a[three]^a[i]^(a[i]=a[three]);
    three--;
    i--;
}
i++;
````
Time complexity-O(n)<br>
Space complexity-O(1)<br>
<br>
The code can be found [here](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/1.%20Array/weird_sorting/WeirdSortingMerlin.cpp)<br>
