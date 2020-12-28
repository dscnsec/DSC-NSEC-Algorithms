# Binary Add

[Problem link](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/2.%20String/binary_add/binary_add.md)<br>

The problem asks us find the sum of 2 binary strings.<br>
A binary string will be input from left to right, so we need to iterate it from right to left.<br>
For example-
```12: 1100 , msb=1 lsb=0```<br>
Hence we need to move from lsb to msb and not vice versa.<br>
We will assign 2 pointers i and j to the last indices of the 2 binary numbers.<br>
**Step to calculate sum**-<br>
For any bit, the value in sum will be ```sum of the bit values for both numbers+carry```<br>

Now what is carry?<br>
Carry is the value which will get added on after the adding of 2 bits.<br>
```1+1=2, ans=0 carry=1```<br>
Now we repeat the main step as long as we haven't reached the msb(most significant bit) of either number.<br> 
Once we have reached the end, we will do the above step, but we will consider on that number whose msb we haven't reached.<br>
Once we finish that, we are done.<br>

Are we?<br>
No, we are missing a very vital step here.<br>
Consider- ```111+1```<br>
According to our logic, ```ans=000```<br>
What about the 1 in msb?<br>
It is there, present in carry.<br>
So we need to add the carry after our computer answer.<br>
And since we computed the answer in a reversed fashion, output the reverse of the answer computed.<br>

The code can be found [here](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/2.%20String/binary_add/binary_add_merlin.cpp).
