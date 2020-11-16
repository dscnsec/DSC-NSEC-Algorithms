# Destroy Asteroid

**Difficulty: Medium**

There is a game in the weapons section called destroy the asteroids.You need to play this game in order to fill your task bar to throw the impostors out. You have been given the absolute size of N asteroids and their respective signs represent their direction(positive means right, negative means left). All the N asteroids move at the same speed. <br/>
When 2 asteroids collide, you have to destroy the smaller one. If both are of the same size, then destroy both the asteroids. Two asteroids moving in the same direction will never collide. <br/>
Find out the state of the asteroids after all collisions.

## Input

- The first line of the input contains a single integer T denoting the number of test cases. T test cases folows
- The first line of each test case contains a single digit N
- The next line contains N space separated integers

## Output

- For each test case, print the state of the asteroids after all collisions.

## Example Input

4 <br/>
3 <br/>
5 10 -5 <br/>
2 <br/>
8 -8 <br/>
3 <br/>
10 2 -5 <br/>
4 <br/>
-5 -1 1 5

## Example Output

5 10 <br/>
<br/>
10 <br/>
-5 -1 1 5

## Explanation

- Test Case 1: 10 and -5 collide and -5 is destroyed. 5 and 10 do not collide because they are moving in the same direction
- Test Case 3: 2 and -5 collide and 2 is destroyed. After that, 10and -5 collide and -5 is destroyed, leaving behind 10 only.
- Test Case 4: No asteroids collide as they are moving the opposite directions.
