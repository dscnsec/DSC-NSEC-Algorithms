# [Crewmate, Impostor, No-one](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/9.%20Graph/crewmate_impostor_noone/crewmate-impostor_noone.md)

### Objective

We have to find the number of regions the space station can be divide in, where each of these given characters divide the block into contiguous regions.

### Intuition

Here, in the question it is given that each symbol occupy a cell of size 1 x 1. Since each symbol again divide the cell, it won't be a nice idea to deal the problem, taking the cell
1 x 1 as the lowest unit.<br><br>
So we can consider another space with three * size of the given square. So that we can mark the symbols more effectively.<br><br>
Also after findiang an unvisited cell, we need to mark all the cells that can be visted from that cell and mark them as a specific region, in this way we can count the number of regions. <br>


### Approach

We first input the given strings into a vector of strings. Then declare the upscaled new space. and initialize all the cells with 0 indicating it as unvisited.<br>
Now traverse the space and mark the cells that came as the symbols as visited. ie we have divided a cell in given square to a 3*3 square. So :
- For the symbol *\\*, we mark the primary diagonal and
- For the symbol */*, we mark the secondary diagonal
<br>
Now initialize a counter with zero.
Now traverse the new space and see if it has an unvisited cell. If it has an unvisited cell, then mark all the unvisited cells that can be reached from the present cell, as visited 
using recursive dfs function and increment the counter.<br>
Print the value of the counter followed by a newline.

<br><br>
Time Complexity - O(n) <br>
Space Complexity - O(n) <br>
<br>

You can find my solution [here](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/9.%20Graph/crewmate_impostor_noone/crewmate_imposter_noone_harikrishnan.cpp)

