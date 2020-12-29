/**
 * @file [CPP]collect_target_csubhradipta.cpp
 * @brief : Check if the input is equal to the sum of any root to leaf path
 * @details
 *                  1
 *                 / \
 *                /   \
 *               4     2
 *               \    / \
 *                3  5   6
 * 
 * The pathsum from root to leaf and input is checked using recursion
 * From the root, the node value is subtracted from the input value
 * This is continued until the pointer reaches the leaf nodes
 * If the input value and leaf node value is same, return true; Else return False
 * Space Complexity : O(n)
 * Time Complexity : O(n)
 * @author [Subhradipta Choudhury](https://github.com/csubhradipta)
 */
 
#include <bits/stdc++.h> 
using namespace std; 

struct Node { 
    int data; 
    struct Node* left; 
    struct Node* right; 

    Node(int val) 
    { 
        data = val; 
        left = NULL; 
        right = NULL; 
    } 
};


int sum(Node *rt, int n){
    if (rt == NULL)                 // if such root to leaf path not found
        return false;
    else if ((rt->data == n) && (rt->left == NULL) && (rt->right == NULL))      // at last if the input value equals to the leaf node value, return true
        return true;
    else
        return sum(rt->left, n - rt->data) || sum(rt->right, n - rt->data);     // calling recursively and updating input value by subtracting intermediate node value
}

int main() 
{   
    Node *root;
    root = new Node(1);
    root->left = new Node(4);
    root->left->right = new Node(3);
    root->right = new Node(2);
    root->right->left = new Node(5);
    root->right->right = new Node(6);

    int x;
    cin>>x;

    string check = (sum(root, x) == 1) ? "True" : "False";
    cout<<check<<endl;
    return 0;
} 