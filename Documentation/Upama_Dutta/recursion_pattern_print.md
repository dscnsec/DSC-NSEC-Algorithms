# pattern Print

question can be found here : <a href="https://github.com/chaltidutta/DSC-NSEC-Algorithms/tree/master/3.%20Recursion/pattern/pattern.md"> here </a> <br>
Answer can be found here : <a href="https://github.com/chaltidutta/DSC-NSEC-Algorithms/blob/master/3.%20Recursion/pattern/patternUpama.cpp">here </a><br>

First we will be taking a function to print the number of a row.
It will obviously an recursive function, where the function print the value of n, then call itself for n-1
value.

<p align="center"><i>
if (n < 1) 
        return;   
    Rows(n-1);
</p></i> <br><br>

then another function to print the whole pattern, where this function will cal the previous function
for each row.

<p align="center"><i>
if (n < 1) 
        return; 
    solve(n-1); //calls itself (recursive call)   
    Rows(n);
</i></p>

Time complexity-O(n) 
Space complexity-O(1)