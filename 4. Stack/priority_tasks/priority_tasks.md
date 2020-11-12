# Priority Tasks

**Difficulty: Medium**

You have to perform N more tasks in order to complete your duty and contribute in the filling of the task bar. The next N tasks have been assigned a priority number. Higher the priority number, higher the priority. 2 or more tasks may or may not have the same priority number. For each of the N tasks, your job is to find out the task with the next greater priority. Note that the priority arrangements are circular, ie, the next priority number of the last task is the priority number of the first task. If no such task exists for a particular task, return -1 for it.

## Input

- The first line of the input contains a single integer T denoting the number of test cases. T test cases folows
- The first line of each test case contains a single digit N
- The next line contains N space generated integers

## Output

- For each test case, print N space generated integers for which ith element denotes the task with the next greater priority number

## Example Input

2 <br/>
3 <br/>
1 2 1 <br/>
4 <br/>
1 3 4 2

## Example Output

2 -1 2 <br/>
3 4 -1 3

## Explanation

- In test case 2,immediately next greater priority task to 1 is 3, to 3 is 4. There is no task with priority greater than 4, hence -1. The array ends after 2 but it is a circular array, hence the searching begins from the beginning of the array and the priority task immediately greater than 2 is 3.
