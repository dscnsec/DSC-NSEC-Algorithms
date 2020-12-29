/**
 * @file [CPP]rank_csubhradipta.cpp
 * @brief : Find number of officials whose rank falls in range of given values
 * @details
 *                  15
 *                 /  \
 *                /    \
 *              10      20
 *             / \      / \
 *            5   12   17  25
 *
 * Traversing each nodes of tree recursively from root to leaves
 * So, counting starts from the leaves
 * If node value is between the range of l and r values, count++
 * Steps continued until reaches the root node and return count
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

int nodeCount(Node *rt, int x, int y){
    int count = 1;
    
    if(rt == NULL)      // mainly for nodes after leaf node (i.e. null) 
        return 0;
        
    else if (rt->data >= x && rt->data <= y){   // node value within the range
        
        count += nodeCount(rt->left, x, y);     //  setting left child as root for the next call
        count += nodeCount(rt->right, x, y);    //  setting right child as root for the next call
        return count;
    }
}

void solve(){
    Node *root;
    root = new Node(15);
    root->left = new Node(10);
    root->left->left = new Node(5);
    root->left->right = new Node(12);
    root->right = new Node(20);
    root->right->left = new Node(17);
    root->right->right = new Node(25);

    int l,r;
    cin>>l>>r;

    cout<<nodeCount(root, l, r)<<endl;
}

int main() 
{   
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
} 