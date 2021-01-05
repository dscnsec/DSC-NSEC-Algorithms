# Rank

[Problem](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/6.%20Binary%20Tree/rank/rank.md)  
[Source code](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/6.%20Binary%20Tree/rank/%5BCPP%5Drank_csubhradipta.cpp)

## Explanation

Here, our task is to count number of nodes falling in the given range.

This can be done in a very simple way.

We will traverse the binary tree from root recursively, and count the nodes falling in the range [x,y].

```cpp
int nodeCount(Node *rt, int x, int y){
    int count = 1;
    
    if(rt == NULL)
        return 0;
        
    if (rt->data >= x && rt->data <= y){
        
        count += nodeCount(rt->left, x, y);
        count += nodeCount(rt->right, x, y);
        return count;
    }
}
```
And finally count will be returned when `rt` reaches to NULL for each branch.



## Space & Time complexities

Space Complexity:  O(n)  
Time Complexity:  O(n)