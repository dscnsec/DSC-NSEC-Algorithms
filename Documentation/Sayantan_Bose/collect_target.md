# collect target
[**Problem Link**](https://github.com/dscnsec/DSC-NSEC-Algorithms/tree/master/6.%20Binary%20Tree/collect_target)
[**Code Link**](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/6.%20Binary%20Tree/collect_target/collect_target_sayantan.cpp)


Approach Used :
In this problem we will use a recursive way to check whether the left or right child has the path sum equal to the number value at the current node.

<br><br>
<p align="center"><i>
 if(new_node == NULL) <br>
        return false; <br>

else <br>
{<br>
    bool answer = 0; <br>
    int subsum = sum - new_node->data; <br>
    //If the leaf node comes and the sum = 0 then we return true value <br>
    if(subsum == 0 && new_node->left==NULL && new_node->right == NULL) <br>
        return 1; <br>
    //Or we check the left subtree <br>
    if(new_node->left) <br>
        answer = answer || collect_target(new_node->left, subsum); <br>
    //Or we check the right subtree <br>
    if(new_node->right) <br>
        answer = answer || collect_target(new_node->right, subsum); <br>
    return answer; <br>
}
</i> </p><br><br>

Time Complexity : O(n)
Space Complexity : O(n)