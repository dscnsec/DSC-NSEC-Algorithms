# Cookie Collect

**Difficulty: Medium**

You have been assigned N tasks, labelled 0 to N-1. Along with that the General has given you a list. According to the list, some tasks may have prerquisites. For eg, to complete task 0 you may have to complete task 1 which is expressed as a pair [0,1]. <br/>
Based on the prerequisites list, you have to determine whether it is possible to do all tasks from 0 to N-1.

## Input

- The first line of the input contains a single integer T denoting the number of test cases T. T test cases follow
- The first line of each test case contains N and K
- The next K lines contains a pair [a,b] which means that task b is a prerequisite of task a.

## Output

- For each test case, print whether it is possible to complete all 0 to N-1 tasks.

## Example Input

3 <br/>
2 1 <br/>
1 0 <br/>
4 4 <br/>
1 0 <br/>
2 0 <br/>
3 1 <br/>
3 2 <br/>
2 2 <br/>
1 0 <br/>
0 1

## Example Output

YES <br/>
YES <br/>
NO

## Explanation

- The prerequisite list for test case 1 is ((1,0)). Hence it is possile to complete both tasks.
- The prerequisite list for test case 2 is ((1,0),(2,0),(3,1),(3,2)). The tasks can be done in the order 0,2,1,3.
- The prerequisite list for test case 3 is ((1,0),(0,1)). Both tasks are a prerequisite of each other. Hence all the tasks cannot be completed.
