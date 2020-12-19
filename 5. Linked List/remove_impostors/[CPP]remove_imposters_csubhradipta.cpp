/**
 * @file : [CPP]remove_imposters_csubhradipta.cpp
 * @brief: Delete y number of nodes after xth node
 * @details:
 * INSERT elements (first taking input for number of nodes from user)
 * DELETING (x+1)th node y times, as the next element comes to its previous place
 * Space Complexity : O(n)
 * Time Complexity : O(n)
 * @author [Subhradipta Choudhury](https://github.com/csubhradipta)
 */
 
#include <bits/stdc++.h> 
using namespace std; 

class Node { 
public: 
    int val; 
    Node* next; 
}; 

Node *start;        // Declared start pointer globally

int main() 
{ 
    int n, data;    // for number of nodes
    cin>>n;         // taking number of nodes as input from user
    int x,y;
    cin>>x>>y;

    Node *p, *temp;
    while(n--){
        cin>>data;      // element to be inserted
        p = start;
        temp = new Node;
        temp->val = data;
        temp->next = NULL;
        if(!start)
            start = temp;
        else{
            while (p->next != NULL)     // adding node to linked list
                p = p->next;
            p->next = temp;
            p = temp;
        }
    }
    
    int i;
    while(y--){                 // for deleting nodes from same position as rest of nodes shifted left after deletion of one node
        i = 1;
        temp = p = start;       // initialized 
        while(i < x){
            temp = temp->next;
            i++;
        }
        p = temp->next;         // skipping node
        temp->next = p->next;   // previous node linked to next to skipped node
        free(p);                // free the node 
    }

    p = start;
    while(p != NULL){      // iterating till mid position
        cout<<p->val<<" ";
        p = p->next;
    }

    return 0;
} 