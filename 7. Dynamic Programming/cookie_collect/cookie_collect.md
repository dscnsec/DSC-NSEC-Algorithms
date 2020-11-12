# Cookie Collect

Being in the space for so long has become very boring for the crewmates. The Space General decided to set up a competition for the crewmates for a little fun. He asked each crewmate to enter into a matrix of size N X N. In each cell there are certain number of cookies. You have to collect the maximum possible number of cookies. But you can only move right, right-up or right-down.

## Input

- The first line of the input contains a single integer T denoting the number of test cases T. T test cases follow
- The first line of each test case contains a single integer N
- The next N lines contains N space generated integers

## Output

- For each test case, print the maximum cookies that can be collected.

## Example Input

1 <br/>
4 <br/>
1 3 1 5 <br/>
2 2 4 1 <br/>
5 0 2 3 <br/>
0 6 1 2 <br/>

## Example Output

16

## Explanation

The grids visited are (2,0) -> (1,1) -> (1,2) -> (0,3) OR (2,0) -> (3,1) -> (2,2) -> (2,3)
