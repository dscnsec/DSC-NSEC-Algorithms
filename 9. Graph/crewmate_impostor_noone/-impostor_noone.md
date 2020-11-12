# Crewmate, Impostor, No-one

**Difficulty: Hard**

The space station is in the shape of an NXN square, composed of blocks of size 1x1. Each 1X1 has either a crewmate, denoted by a '/' , or an impostor, denoted by a '\' , or no one. Each of these characters divide the block into contiguous regions. <br/>
The space general wants to know the number of regions the space station can be divide in.
**Note- backslash characters are escaped, so a '\' is represented as '\\'**

## Input

- The first line of the input contains a single integer T denoting the number of test cases T. T test cases follow
- The first line of each test case contains a single integer N
- The next N line contains a string of length N with only 3 characters, '/' or '\\' or a blank.

## Output

- For each test case, print the number of regions formed

## Example Input

5 <br/>
2 <br/>
" /" <br/>
"/ " <br/>
2 <br/>
" /" <br/>
" " <br/>
2 <br/>
"\\/" <br/>
"/\\" <br/>
2 <br/>
"/\\" <br/>
"\\/" <br/>
2 <br/>
"//" <br/>
"/ "

## Example Output

2 <br/>
1 <br/>
4 <br/>
5 <br/>
3

## Explanation

The grid for the test cases is as follows:

- Test Case 1:
  ![grid](../../images/grid1.PNG)
- Test Case 2:
  ![grid](../../images/grid2.PNG)
- Test Case 3:
  ![grid](../../images/grid3.PNG)
- Test Case 4:
  ![grid](../../images/grid4.PNG)
- Test Case 5:
  ![grid](../../images/grid5.PNG)
