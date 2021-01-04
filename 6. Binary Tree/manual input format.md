# Manual Input Template for Binary Trees

We can input binary trees in a preorder tree traveral way, by using boolean values like true or false to indicate if a node is the left or right node of a parent node. The node 
value is first given and then whether it contains a left subtree and a right subtree is indicated by two booloean values respectively.
Let's see an example to understand this.

Example 1: 10 true 20 true 40 false false true 50 false false true 30 true 60 false false true 73 false false

Here 10 is the root, and the next true implies that it contains a left subtree. Now 20 is the root of that left subtree and the next true indicates that '20' contains a left subtree
whose value is 40. The next two false values implies that 40 is a leaf node. The next true value indicates that 20 contains a right subtree with 30(the next value) as its root. And
so on...

### C++ Template
```
#include<bits/stdc++.h>
using namespace std;

struct Node { 
    int data; 
    struct Node* left; 
    struct Node* right;   
    // val is the key or the value that 
    // has to be added to the data part 
    Node(int val) 
    { 
        data = val; 
        // Left and right child for node 
        // will be initialized to null 
        left = NULL; 
        right = NULL; 
    } 
}; 

Node* input() {
    string left, right;
    int data;
    cin >> data;                // input for root node
    Node* node = new Node(data);
    
    cin >> left;
    if(left == "true") {
        node->left = input();  // taking input for left subtree
    }
    
    cin >> right;
    if(right == "true") {
        node->right = input(); // taking input for right subtree  
    }
    return node;                // return root node
}


int main()
{
    Node* root = input();
    /*
    Now, 'root' is the root of the binary tree in the given problem
    Enter your code here. 
    */
    return 0;
}

```

This idea for such a manual input method is based on [here](https://stackoverflow.com/questions/44869272/taking-binary-tree-as-inputrecursively)
