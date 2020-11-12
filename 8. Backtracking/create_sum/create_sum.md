# Create Sum

The notorious impostors have sabatoged the reactors and the crewmates have only a few minutes to solve a puzzle put forward by the impostors. According to the riddle, there are N integers and target X given. The crewmates have to prepare a list of all unique combinations of the N integers where the chose numbers sum to X. The same integer may be chosen unlimited number of times. Two combinations are unique if the frequency of at least one of the chosen numbers is different.

## Input

- The first line of the input contains a single integer T denoting the number of test cases T. T test cases follow
- The first line of each test case contains N and X
- The next line contains N space generated integers

## Output

- For each test case, print all possible combinations of the N integers amounting to X

## Example Input

1 <br/>
4 <br/>
2 3 6 7

## Example Output

2 2 3 <br/>
7

## Explanation

2 and 3 are the selected integers. 2+2+3=7. Note that 2 can be used multiple times
7 is the selected candidate. 7=7.
There are only 2 possible combinations
