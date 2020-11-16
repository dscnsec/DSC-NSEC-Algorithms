# Find Minimum

**Difficulty: Hard**

When you enter the upper engine, you notice a list of N integers given to you, a keyboard with digits from 0 to 9 and a leaflet beside it. The leaflet mentions that for the given list of integers, you need to find the sum of minimum of every contiguous subarray from the list of integers. As soon as you find out the sum, you need to enter the sum in the keyboard so that the answer is processed and your task is completed.
**Note: Use stack**

## Input

- The first line of the input contains a single integer T denoting the number of test cases. T test cases folows
- The first line of each test case contains a single digit N
- The next line contains N space generated integers

## Output

- For each test case, print the sum of minimum of every contiguous subarray from the list of integers. Since the answer may be large, print the answer modulo **10^9+7**

## Example Input

1 <br/>
4 <br/>
3 1 2 4

## Example Output

17

## Explanation

The subarrays are (3), (1), (2), (4), (3,1), (1,2), (2,4), (3,1,2), (1,2,4), (3,1,2,4). The respective minimums are 3, 1, 2, 4, 1, 1, 2, 1, 1, 1 and the sum is 17.
