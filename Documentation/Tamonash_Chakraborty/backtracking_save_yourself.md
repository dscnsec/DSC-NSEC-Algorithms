# Save Yourself

[Problem link](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/8.%20Backtracking/save_yourself/save_yourself.md)

The problem asks us to find all palindromic partitions of a given string.<br>
First, let us check the substrings that are palindromes in the given string.<br>
There is a very simple way to do this.<br>
We will make a boolean array of size n*n which will store if every substring is a palindrome.<br>
We will mark palin[i][i] as `true`, since all single characters are palindromes.<br> 
We will run an outer loop from 2 to n, where n is length of the string. And this loop will act as the length of the substring.<br>
Now, we will run an inner loop from 0 to n(can be reduced too).<br>
The starting point of our substring is this value(let us say it is `j`), and the ending point `end=j+length of substring(outer loop)-1`<br>
Then we fill palin[j][end] (if end<n) as-
* if length of substring is 2, palin[j][end]=string[j]==string[end]
* if length>2, palin[j][end]=palin[j+1][end-1] & (string[j]==string[end])

We have our palindromes, now is the time to print partitions.<br>
We will make a recursive function, which will necessary receive the following as parameters-<br>
* The starting index `begin`
* A stack which holds the palindromic partitions that have been formed till now

Now we start iterating from begin to end of string length.<br>
If we find a substring such that it is a palindrome, we add it to the stack, and then call the function recursively, to find how many palindromic partitions are possible for the remaining string.<br>
Now how do we find if we have a partition?<br>
Its very simple, if begin>=length of string, we will print the stack contents, as they are our partition.<br>

Time complexity-O(n.2^n).<br>
For every partition, we are checking for palindromes, hence time complexity should be O(n^2.2^n).<br>
But we have pre-calculated palindromes in O(n^2)<br>
Hence the time required-O(n^2+n.2^n)~O(n.2^n)<br>
Space complexity-O(n.s) where s is number of partitions possible.<br>

The code can be found [here](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/8.%20Backtracking/save_yourself/SaveYourselfMerlin.java).
