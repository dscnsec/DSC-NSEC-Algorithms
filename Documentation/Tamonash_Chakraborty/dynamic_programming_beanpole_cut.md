# Beanpole Cut

[Problem link](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/7.%20Dynamic%20Programming/beanpole_cut/beanpole_cut.md)

We have to find out the maximum amount obtainable by cutting a beanpole at different lengths.<br>
Suppose we consider any arbitrary point `i` on the beanpole and decide to make a cut of size `j` on the beanpole.<br>
Then, our cost for that will be<br>
`cost[j]+maximum attainable cost of length (i-1-j)`<br>
Thus, we can see that we have overlapping subproblems, and by a simple recursive formula, our time complexity would be exponential.<br>
Hence we will use dynamic programming.<br>

For any index `i` from 1 to n, we will store the maximum value possible by making a cut at that point.<br>
It can be calculated by the aforesaid formula:<br>
![](https://github.com/m-e-r-l-i-n/DSC-NSEC-Algorithms/blob/documentation/Documentation/Tamonash_Chakraborty/dependencies/img-813f7047d4850a47.png)<br>
Our answer will be:<br>
![](https://github.com/m-e-r-l-i-n/DSC-NSEC-Algorithms/blob/documentation/Documentation/Tamonash_Chakraborty/dependencies/img-3ee4dbe737124f77.png)

Time complexity-O(n^2)<br>
Space complexity-O(n^2)

The code can be found [here](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/7.%20Dynamic%20Programming/beanpole_cut/beanpole_cut_merlin.cpp).
