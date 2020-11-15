# 5% mean

**Difficulty: Easy**

All the impostors are identified using an id number starting from 1. The ids are arranged in a stack in the security. Stack 1 contains only 2 ids, 1 and 2. Stack 2 onwards there are x ids in each stack, ie, stack 2 onwards there are (x+3) to (2x+2) ids in each stack. <br/>
The impostors have stolen the id of the Nth crewmate to create mess in the Space Station. <br/>
You have been assigned the task to find out the stack number of the stolen id.

## Input

- The first line of the input contains a single integer T denoting the number of test cases T. T test cases follow
- The first line of each test case contains integers N and x

## Output

- For each test case, print the stack number of the stolen id.

## Example Input

4 <br/>
7 3 <br/>
1 5 <br/>
22 5 <br/>
987 13

## Example Output

3 <br/>
1 <br/>
5 <br/>
77

## Explanation

In test case 1, id no 7 has been stolen. Id 1 and 2 are in stack 1. 3 4 5 are in stack 2 (3 ids in each stack). Finally 6 7 8 in stack 3.
