# Crewmate Imposter Noone

[Problem link](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/9.%20Graph/crewmate_impostor_noone/crewmate-impostor_noone.md)

We are given a square grid of size n, filled with `/`,`_` or `'\'`(forward slash).<br>
Now, we have to find the number of regions that the grid has been broken into.

Let us take the `/` first. We can make a 3x3 grid, and then fill it up the following way-<br>
001<br>
010<br>
100<br>
We can clearly see that the 1's form a backslash, and thus, the diagonal divides the box into 2 parts.<br>
We can do the same for forward slash too-<br>
100<br>
010<br>
001<br>
The entire grid will be 0 for an `_`.

Thus, we can see that the entire nxn matrix that we are provided with, can be converted into a (3n)x(3n) matrix, with `1` denoting a blockage, and `0` denoting empty space.<br>
Hence, the problem boils down to simply finding number of islands in the newly formed matrix.<br>

Now how do that?<br>
We will iterate through the matrix.<br>
Whenever we find an index that has not been visited, and is empty, we call a function that does the following-<br>
* If the position is valid, and not visited, then mark the position as visited
* Recursively call the function and go the adjacent positions.<br>
Assuming the current position is (x,y), the adjacent positions are-
  * (x+1,y)
  * (x-1,y)
  * (x,y+1)
  * (x,y-1)
    
This is simply performing dfs on the matrix.<br>
We will keep a counter variable, and whenever we find an unvisited node(before calling this function), we will increment the count.<br>
Our final answer will be the value in the counter variable.<br>

Time complexity-O(9.n.n)~O(n^2)<br>
Space complexity-O(9.n.n)~O(n^2)

