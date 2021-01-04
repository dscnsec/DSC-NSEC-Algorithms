
# Rotate Word
[Problem](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/2.%20String/rotate_word/rotate_word.md)   
[Source code](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/2.%20String/rotate_word/%5BCPP%5Drotate_word_csubhradipta.cpp)   
## Explanation
Here, our task is to find pivot and rotate the second given string and check if it is same as the first given string or not.  

We will take two character variables to find the pivot in second string ``str2`` -  
```cpp
char start = str1[0];
char end = str1[str1.size() - 1];
```
Initialize ``pivot = -1;``  

Now traverse the second string ``str2`` from 2nd character onwards and check if ``str2[i] == start`` and ``str2[i-1] == end`` . If true, set ``pivot = i`` and break out of the loop.

If pivot not found, print "NO".  
Else, rotate the string with respect to the pivot, i.e.  
```cpp
rotate(str2.begin(), str2.begin() + pivot, str2.end());
```
And check if it is same as the string ``str1`` or not.  
If true, print "YES", else "NO".

 
## Space & Time complexities
Space Complexity: &emsp;O(n)  
Time &nbsp;Complexity: &emsp;O(n)

