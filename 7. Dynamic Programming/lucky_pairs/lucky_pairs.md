# Lucky Pairs

As soon as you enter security, you notice that there is a sheet of paper lying which consists of T pairs of words. This sheet is a message from the impostors which states that you need to find out whether each pair of words are **lucky** pairs or not.
Lucky pairs of strings are those pair of strings whose length of the common subsequence between the 2 is greater than or equal to half the length of the larger string between the pair.

## Input

- The first line of the input contains a single integer T denoting the number of test cases T. T test cases follow
- The next T lines contains two strings X and Y

## Output

- For each test case, print "YES" (without quotes) if the pair of strings is a lucky pair else print "NO" (without quotes)

## Example Input

2 <br/>
abcde ace

## Example Output

YES

## Explanation

The longest common subsequence is ace and its length is greater than half the length of abcde(3>2.5).
