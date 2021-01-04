/**
 * @file Rank
 * @brief In this program we have to find out the rank of the official in the given range
 * @Aprroach
   In this problem we will use a recursive way. We will start traversing the binary tree form the node and if a particular node lies in
   the given range then we will add 1 to the result and recur for the children. if the current node is found to be smaller then recur to its right child else
   recur to its left child
 * @details
 * Time complexity O(n) and Space Complexity O(n)
 * All the officials involved in the space mission have assembled together but they are standing in a particular order. All of them have rank,
   higher the rank, higher the importance. The following condition is true for each and every official:
   If there is any official x to the left of an official y, its rank is definitely smaller than y.
   If there is any official z to the right of an official y, its rank is definitely higher than y.
   Two integers are given, L and R. You are the crewmate who has been assigned the task to find out the number of officials
   lying in the range L to R(both inclusive)
 * Input :
   Manually construct the tree
   The first line of the input contains a single integer T. T lines follow
   The second line contains 2 space separated integers, L and R
 * Output :
   To display the number of officials lying in the range L to R(both inclusive)
 * Sample input :
   15 true 10 true 5 false false true 12 false false true 20 true 17 false false true 25 false false
   2
   10 30
   5 15
 * Sample Output :
   6
   4
 * Explanation :
   In test case 1, there are 5 officials whose rank falls in the range 10 to 30 In test case 2, there are 4 officials whose rank falls in the range 5 to 15
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
int Rank(Node* new_node, int low,int high)
{
    //Base case
    if(new_node == NULL)
    {
        return 0;
    }
    //Special case to increase the efficiency
    if(new_node->data == high && new_node->data == low)
    {
        return 1;
    }
    //If the current node is in the range then we will add 1 and then recur for left and right sub tree
    if(new_node->data <= high && new_node->data >= low)
    {
        return 1 + Rank(new_node->left, low, high) + Rank(new_node->right, low, high);
    }
    //If the current node is smaller than low then go to right child
    else if(new_node->data < low)
    {
        return Rank(new_node->right,low,high);
    }
    //Else go for the left child
    else
    {
        return Rank(new_node->left,low,high);
    }
}


int main()
{
    Node* root = input();
    /*
    Now, 'root' is the root of the binary tree in the given problem
    Enter your code here.
    */
    int t;
    cin>>t;
    while(t--)
    {
        int low,high;
        cin>>low>>high;
        int ans = Rank(root,low,high);
        cout<<ans<<endl;
    }
    return 0;
}
