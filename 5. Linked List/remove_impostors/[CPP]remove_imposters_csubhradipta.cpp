/**
 * @file : [CPP]remove_imposters_csubhradipta.cpp
 * @brief: Delete y number of nodes after xth node
 * @details:
 * INSERT elements (first taking input for number of nodes from user)
 * DELETING (x+1)th node y times, as the next element comes to its previous place
 * Repeat same after x nodes again
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
    
    int skip, del;
    p = start;
    Node *ptr;
    
    while(p != NULL){
        
        skip = x-1;
        while(skip-- && p != NULL)      // skipping x nodes
            p = p->next;
            
        if(p == NULL)       // if current pointer reaches to null, traversal stopped
            break;
            
        ptr = p->next;      // initializes ptr to (x+1)th node
        
        del = y;
        while(del-- && ptr != NULL && temp != NULL){    // deleting y nodes
            temp = ptr;
            ptr = ptr->next;
            free(temp);
        }
        
        p->next = ptr;      
        p = ptr;            // continue iteration for rest of the nodes
    }

    p = start;
    while(p != NULL){     
        cout<<p->val<<" ";
        p = p->next;
    }

    return 0;
} 
