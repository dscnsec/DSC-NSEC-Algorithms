# Rank

**Difficulty: Easy**

All the officials involved in the space mission have assembled together but they are standing in a particular order. All of them have rank, higher the rank, higher the importance. The following condition is true for each and every official:

- If there is any official x to the left of an official y, its rank is definitely smaller than y.
- If there is any official z to the right of an official y, its rank is definitely higher than y.

Two integers are given, L and R. You are the crewmate who has been assigned the task to find out the number of officials lying the range L to R(both inclusive)

## Input

- The first line of the input contains a single integer T. T lines follow
- The second line contains 2 space generted integers, L and R

## Example Input

![btree](../../images/btree3.png)

**2** <br/>
**10 30** <br/>
**5 15**

## Example Output

**5** <br/>
**4** <br/>

## Explanation

In test case 1, there are 5 officials whose rank falls in the range 10 to 30
In test case 2, there are 4 officials whose rank falls in the range 5 to 15
