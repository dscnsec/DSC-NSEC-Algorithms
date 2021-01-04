# Binary Addition

question can be found here : <a href="https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/2.%20String/binary_add/binary_add.md"> here </a> <br>
Answer can be found here : <a href="https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/2.%20String/binary_add/binary_addition_chalti.cpp">here </a><br>

In  this program we will be given two binary strings and we have to add them
To do this problem, we need to know the addition method of two binary string:
                                0+1=1  carry=0
                                0+0=0  carry=0
                                1+0=1  carry=0
                                1+1=0  carry=1

the main algoritthm behind the code is, we will last from the first digit of both of the strings and add them, if the sum of those two digits are rater * than 1 then store the carry avlue in the next digit. 

<p align="center">while (xz >= 0 || yz >= 0 || sumOfdigit == 1) 
        { 
            sumOfdigit += ((xz >= 0)? x[xz] - '0': 0); 
            sumOfdigit += ((yz >= 0)? y[yz] - '0': 0); 
            result = char(sumOfdigit % 2 + '0') + result; //if current result if 1 or 0 then add it with the resultant string
            sumOfdigit /= 2;  //carry
            xz--; yz--;  //increase the digit number or move to the next digit
        }</p> <br>

Time comlpexity : O(n) <br>
Space Comepexity : O(n)