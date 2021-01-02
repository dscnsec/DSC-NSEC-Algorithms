/**
 * @file common_boss_harikrishnan.cpp
 * @brief Given two employee ids, find thier common boss at the lowest level.
 *
 * Description -  Here, the recruiting system is based on a hierarchy, where each employee has 0,1 or 2 employees under him. Here we have to find the 
 * Lowest Common Ancestor of the two given employee ids. We can find it using a recursive function.
 * We can traverse(in DFS manner) recursively and if we find a node with an employee id, we can return that node, else return NULL.
 * By following this,the node which gets a not NULL value returned from both its sides will be the LCA.
 * A special case occurs when the lca is one of the nodes(with employee ids), in that case, the algorithm, figures out it, and returns the  lca node, without even reaching the other employee id node.
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

Node* commonBoss(Node* root, int emp1, int emp2)
{
    if(root == NULL || root->data == emp1 || root->data == emp2)
    {
        return root;
    }
    
    // Find if any of the given employee id is in either of the two subtrees.
    Node* left = commonBoss(root->left,emp1,emp2);
    Node* right = commonBoss(root->right,emp1,emp2);
    
    // Return the node which is not NULL,in case if both are NULL, return NULL.
    if(right == NULL) { return left;}
    if(left == NULL) { return right;}
        
    return root;
}

int main()
{
    int emp1,emp2;
    // First Input the binary tree
    
    Node* root = input();
    // input the two employee ids
    
    cin>>emp1>>emp2;
    if((commonBoss(root,emp1,emp2)) == NULL)
    {
        cout<<"No Employees Found, with the given employee ids.";
        return 0;                                     
    }
    cout<<(commonBoss(root,emp1,emp2)->data);
    return 0;
}

/*
SAMPLE INPUT

1001 true 1002 true 1004 false false true 1005 false false true 1003 true 1006 false false true 1007 false false
1005 1006

SAMPLE OUTPUT

1001

*/
