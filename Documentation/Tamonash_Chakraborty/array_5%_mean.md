# 5% mean

[Problem link](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/1.%20Array/5%25_mean/5%25_mean.md)<br>
<br>
The problem asks us to find the mean of the elements after removing the largest 5% elements and the smallest 5% elements.<br>
So we first sort the array.<br>
Then we find out x=5% of n(the total number of elements in array).<br>
We remove the largest 5% elements and the smallest 5% elements.<br>
Our answer can be denoted by-<br>
![](https://github.com/m-e-r-l-i-n/DSC-NSEC-Algorithms/blob/documentation/Documentation/Tamonash_Chakraborty/dependencies/img-038297c731082b28.png)<br>
![](https://github.com/m-e-r-l-i-n/DSC-NSEC-Algorithms/blob/documentation/Documentation/Tamonash_Chakraborty/dependencies/img-f2f33388a80dc145.png)<br>
![](https://github.com/m-e-r-l-i-n/DSC-NSEC-Algorithms/blob/documentation/Documentation/Tamonash_Chakraborty/dependencies/img-5396c092026a1988.png)<br>

Time complexity-O(nlogn)<br>
Space complexity-O(1)<br>
<br>
The code can be found [here](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/1.%20Array/5%25_mean/5%25MeanMerlin.cpp)
