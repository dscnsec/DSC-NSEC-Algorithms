# Common Boss

**Difficulty: Medium**

The Space Station needs a lot of employers to function properly. The recruiting system is based on hierarchy, just like in real life. Every boss has either 0 or 1 or 2 employees working directly under them. They are all denoted by their id numbers. <br/>
The Space Commander gives you 2 ids, X and Y and he wants to know their common boss at the lowest level.

## Input

- The first line of input contains a single integer n, denoting the number of nodes. n-1 lines follow
- In every line, there will be two space separated integers, u and v, denoting the parent and child node
- A single integer, denoting the root of the tree
- A single integer q, denoting the number of queries. q lines follow
- Two space separated integers, X and Y, belonging to the binary tree.
- Note: all node values will be between 0 to n-1
## Example Input

![btree](../../images/btree4.PNG)

**9<br>
3 1<br>
5 2<br>
5 6<br>
1 0<br>
1 8<br>
2 7<br>
2 4<br>
3 5<br>
3<br>
2<br>
6 2<br>
5 0**

## Example Output

**5** <br/>
**3**

## Explanation

- Test Case 1: 6 and 2 branch from 5, which is the id of their immediate common boss.
