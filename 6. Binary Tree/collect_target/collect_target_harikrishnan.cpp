/**
 * @file collect_target_harikrishnan.cpp
 * @brief Given a starting point and an end point where in each point it can diverge to 0,1 or 2 paths and each points contain coins. We need to check if we can collect a target
 * amount of coins by travelling from root to the end point(leaf node).
 *
 * Description -  Here, we can solve the problem by using Binary Tree data structure.
 * We can use a recursive function, where each sub-recursive call has a target less than the coins the current node. 
 * Atlast, check if we reach a end point(leaf node) and the target there is equal to the coins present there.
 *
 * Time Complexity - O(N) Space Complexity - O(N)
 * @author [Harikrishnan6336](https://github.com/Harikrishnan6336)
 **/

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

bool collectTarget(Node* root, int X)
{
    if(root == NULL)
    {
        return false;
    }
     
    if(root->data == X && root->left ==  NULL && root->right == NULL) 
    { 
        return true;
    }
        
    return collectTarget(root->left,X-root->data) || collectTarget(root->right, X-root->data);  
}

int main()
{
    // First Input the binary tree
    Node* root = input();
    int X;
    cin>>X;
    if((collectTarget(root,X)))
    {
        cout<<"True";
        return 0;                                     
    }
    cout<<"False";
    return 0;
}

/*

SAMPLE INPUT

1 true 4 false true 3 false false true 2 true 5false false true 6 false false
8

SAMPLE OUTPUT

True

*/
