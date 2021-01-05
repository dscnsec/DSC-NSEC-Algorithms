/**
 * @file Collect Target
 * @brief In this problem we have to find if there is possible path so that the summation from root to leaf give a the value of coin X
 * @Aprroach
   In this problem we will use a recursive way to check whether the left or right child has the path sum equal to the number value at the current node.
 * @details
 * Time complexity O(n) and Space Complexity O(n)
 * The space station is designed in a way such that each path diverges further into either 2 paths, 1 path or no paths at all. The
   topmost navigation center acts as the root, which means that the root is not diverged from any path but is the origin. The bottom-most
   reactor acts as the leaf which means that it will have no path from there. The divergence follows hierarchy. Each path consists of
   certain number of coins and the space general has asked you to collect exactly X coins but has also specified that you must follow the
   hierarchy. He has also specified that the coins collected must be from root to leaf. Find out if it is possible to collect exactly X coins.
 * Input :
   First line specify the elements root or left or right child
   Enter the value of X
 * Output :
   If any possible path is there the display "True" and if not display "False"
 * Sample input :
   1 true 4 false true 3 false false true 2 true 5false false true 6 false false
   8
 * Sample Output :
   True
 * Explanation :
   There are 2 possible ways to attain 8, (1 -> 4 -> 3) and (1 -> 2 -> 5). Note that in both cases, the coins are collected from root till leaf.
 * @author [Sayantan Bose](https://github.com/sayantan1413)
 */
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
bool collect_target(Node* new_node, int sum)
{
    //Return false if there is no node
    if(new_node == NULL)
        return false;

else
{
    bool answer = 0;
    int subsum = sum - new_node->data;
    //If the leaf node comes and the sum = 0 then we return true value
    if(subsum == 0 && new_node->left==NULL && new_node->right == NULL)
        return 1;
    //Or we check the left subtree
    if(new_node->left)
        answer = answer || collect_target(new_node->left, subsum);
    //Or we check the right subtree
    if(new_node->right)
        answer = answer || collect_target(new_node->right, subsum);
    return answer;
}
}


int main()
{
    Node* root = input();
    /*
    Now, 'root' is the root of the binary tree in the given problem
    Enter your code here.
    */
    int sum;
    cin>>sum;
    bool ans;
    ans = collect_target(root,sum);
    if(ans)
    {
        cout<<"True"<<endl;
    }
    else
        cout<<"False"<<endl;
    return 0;
}
