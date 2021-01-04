# Binary Add
[Problem](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/2.%20String/binary_add/binary_add.md)  
[Source code](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/2.%20String/binary_add/%5BCPP%5D%20binary_add_csubhradipta.cpp)
## Explanation
Here, our task is to add two binary strings.

Let's take two binary strings,  
a = 11001  
b = 1101

As we know, addition always done from right to left, so at first, we will reverse the strings

a = 10011  
b = 1011

Next, we will append zero(es) to the end of the smaller string, so that length of both strings becomes equal

a = 10011  
b = 10110

Now, we will refer to the table given below & start adding the corresponding bits.
```
   A  |  B  | Carry(Now) | Sum | Carry(Next)
------+-----+------------+-----+------------
   0  |  0  |     0      |  0  | 	0
   0  |  0  |     1      |  1  | 	0
   0  |  1  |     0      |  1  | 	0
   0  |  1  |     1      |  0  |  	1		
   1  |  0  |     0      |  1  | 	0
   1  |  0  |     1      |  0  |  	1
   1  |  1  |     0      |  0  |  	1
   1  |  1  |     1      |  1  |  	1
```

We will take one string "sum" to store the result and one character variable "carry" to store the carry bit.

Initially, carry is '0'

**In 1<sup>st</sup> iteration**,

a = `1` 0 0 1 1  
b = `1` 0 1 1 0  
carry = `0`

So, `sum = 0` &emsp;and&emsp; `carry = 1`<hr>

**In 2<sup>nd</sup> iteration**, 

a = 1 `0` 0 1 1  
b = 1 `0` 1 1 0  
carry = `1`

So, `sum = 01` &emsp;and&emsp; `carry = 0`<hr>

**In 3<sup>rd</sup> iteration**, 

a = 1 0 `0` 1 1  
b = 1 0 `1` 1 0  
carry = `0`

So, `sum = 011` &emsp;and&emsp; `carry = 0`<hr>

**In 4<sup>th</sup> iteration**, 

a = 1 0 0 `1` 1  
b = 1 1 0 `1` 0  
carry = `0`

So, `sum = 0110` &emsp;and&emsp; `carry = 1`<hr>

**In 5<sup>th</sup> iteration**, 

a = 1 0 0 1 `1`  
b = 1 1 0 1 `0`  
carry = `1`

So, `sum = 01100` &emsp;and&emsp; `carry = 1`

So, we've got our 'sum' string. But still it's incomplete as we have a carry of 1. 

Appending the carry to end of "sum", we get

`sum = 011001`

As, we've performed the addition by reversing the original strings, so, the actual sum will be just the reverse of it.

`sum = 100110`

And that is our required answer.

## Space & Time complexities
Space Complexity: &emsp;O(n)  
Time &nbsp;Complexity: &emsp;O(n)

