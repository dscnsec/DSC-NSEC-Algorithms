# Save Yourself
[**Problem Link**](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/8.%20Backtracking/save_yourself/save_yourself.md)

*In this problem we are given a string and asked to print all possible palindromic partitions of the given string.*
*Here its a typical backtracking problem which can be solved using recursion in order to calculate all possible palindromic partitions of substrings.*
*We just need to make an Arraylist that will store all such possible partitions and a Deque which will store palindromic partitions*
*of each possibility.Now create a separate function for implementing recursive backtracking.First start a loop from start index* 
*to end where we will collect every substring.Then check the string is palindrome or not using a separate method.Then if it* 
*comes palindrome then add it to Deque and start recursion from after the last palindromic string in order to check palindrome for*
*remaining string.Now if at any point the string doesn't comes palindrome,backtrack from that point of recursion by removing the*
*last string added to deque and again start from a new index for checking palindrome.*

**Time Complexity-O(N*2^N)**
*(because outer loop runs entire length of string hence O(n) and inner recursion runs adds and* 
*removes string which takes O(2^n) time)*

**Space Complexity-O(N*M)**
*(where m is the no of partitions)*

[**Code Link**](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/8.%20Backtracking/save_yourself/SaveYourselfArnab.java)
