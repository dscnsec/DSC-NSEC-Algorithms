# Malfunctioning Keyboard
[Problem](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/2.%20String/malfunctioning_keyboard/malfunctioning_keyboard.md)  
[Source code](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/2.%20String/malfunctioning_keyboard/%5BCPP%5Dmalfunctioning_keyboard_csubhradipta.cpp)  
## Explanation
Here, our task is to find the working keys and print them in alphabetical order.   

So, at first we will take an integer array of size 26 (number of small alphabets from 'a' to 'z') and initialize with 0 (also boolean array may be taken, then, in that case initialize the array with 'false').   
```cpp
int arr[26] = {0};
```

A key is malfunctioning if 2 character gets printed while hitting that key once on keyboard.  
So, we will count the number of consecutive repeating characters and check if count is odd or even.  
If count is odd, update the `arr[character - 97]`  with 1.  

Once it done, traverse the array `arr` and print the working  keys.
If `arr[i] == 1` then print `char(i+97)`  

Thus, we get a stream of characters of working keys as output. 
 
## Space & Time complexities
Space Complexity: &emsp;O(n)
Time &nbsp;Complexity: &emsp;O(n)

