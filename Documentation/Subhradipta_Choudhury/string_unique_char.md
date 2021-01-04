
# Unique Character
[Problem](https://github.com/cSubhradipta/DSC-NSEC-Algorithms/blob/master/2.%20String/unique_char/unique_char.md)  
[Source code](https://github.com/cSubhradipta/DSC-NSEC-Algorithms/blob/master/2.%20String/unique_char/%5BCPP%5D%20unique_char_csubhradipta.cpp)  
## Explanation
Here, our task is to find the first unique element of a given string.   

First, we will traverse the string and store each character's frequency into corresponding positions in a counter array of size 26 (number of small alphabets from 'a' to 'z') which is initialized with 0 when declared.

After storing the frequencies, we will again traverse the string until we encounter a character with frequency equals to 1 and store the index of that character to a flag variable and break out of the loop and print it.

 
## Space & Time complexities
Space Complexity: &emsp;O(n)  
Time &nbsp;Complexity: &emsp;O(n)

