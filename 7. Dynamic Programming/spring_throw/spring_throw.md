# Spring Throw

**Difficulty: Hard**

In the cafeteria, N number of blocks have been designed side to side. Each block contains an integer A<sub>1</sub>,A<sub>2</sub>,...,A<sub>N</sub>. Each block consists of a spring. When you are in the i<sup>th</sup> block, the spring in the ith will throw you 1 to Ai blocks further, depending on the intensity with which you press the button. <br/>
Find out the minimum number of times that the spring will throw you so that you reach the end of the blocks. You will start from the first block.

## Input

- The first line of the input contains a single integer T denoting the number of test cases T. T test cases follow
- The first line of each test case contains a single integer N
- The next N lines contains N space separated integers

## Output

- For each test case, print the minimum number of times that the spring will throw you so that you reach the end of the blocks.

## Example Input

2 <br/>
11 <br/>
1 3 5 8 9 2 6 7 6 8 9 <br/>
11 <br/>
1 1 1 1 1 1 1 1 1 1 1

## Example Output

3 <br/>
10

## Explanation

- Test Case 1: Get thrown from 1st block(1) to 2nd block(3). From 2nd block you can either go to 3rd(5) or 4th(8) or 5th block(9). You choose to get thrown to 4th block(8). From here, you can get thrown 1 to 8 blocks. You select 8 and reach the end of the blocks.(1 --> 3 --> 8 -->9)
