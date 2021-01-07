
# Unique Char
[**Problem Link**](https://github.com/dscnsec/DSC-NSEC-Algorithms/tree/master/2.%20String/unique_char)
[**Code Link**](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/2.%20String/unique_char/unique_char_sayantan.cpp)



Approach Used :
In this problem we first traversed the whole character one by one and listed down the frequency of all element. Now we are again traversing
printing the index of only those character which have a frequency 1. But according to the question we need to output the first unique character
so to keep the track of first unique character we use a flag variable If the first unique character is found then the flag is turned false
and it breaks out off the loop. If no unique character is found then the value of flag remains true and gives out -1 as the result.

Time Complexity : O(n)
Space Complexity : O(n)