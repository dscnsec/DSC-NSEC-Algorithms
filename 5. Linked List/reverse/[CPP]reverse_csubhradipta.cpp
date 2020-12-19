/**
 * @file : [CPP]reverse_csubhradipta.cpp
 * @brief: Reverse the linked list
 * @details:
 * INSERT elements (first taking input for number of nodes from user)
 * Taking 3 Node pointers prev, p and next
 * prev points to NULL, next as usual to NULL and p (current) to start
 * prev and p pointer keeps pointing to its back node until p reaches to NULL
 * and then prev becomes the start
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
    
    Node *prev = NULL, *next = NULL;
    p = start;
    while(p != NULL){       // Reversing the nodes
    	next = p->next;     // next points to next to current node
    	p->next = prev;     // current pointer now points to previous node 
    	prev = p;           // previous pointer is now current
    	p = next;           // and current pointer is now next     
    }
    start = prev;           // previous becomes the start

    p = start;
    while(p != NULL){       // display list
        cout<<p->val<<" ";
        p = p->next;
    }

    return 0;
} 