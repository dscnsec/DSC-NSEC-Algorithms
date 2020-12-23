/**
 * @file : [CPP]grouping_csubhradipta.cpp
 * @brief: Group odd node elements and then even node elements
 * @details:
 * INSERT elements (first taking input for number of nodes from user)
 * Take three node pointers - oddEnd, evenStart & evenEnd
 * oddEnd keeps on linking to next odd nodes & evenEnd keeps on linking to next even nodes
 * at last, link the evenStart to oddEnd
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

Node *start;    // Declared start pointer globally

int main() 
{ 
    int n, data; // for number of nodes
    cin>>n;     // taking number of nodes as input from user
    
    Node *p;
    while(n--){
        cin>>data;      // element to be inserted
        p = start;
        Node *temp = new Node;
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
    
    if( start != NULL && start->next != NULL){
     
        Node *evenStart, *oddEnd, *evenEnd;

        evenStart = start->next;    // pointing to second node of linked list
        oddEnd = start;             // pointing to first node of linked list
        evenEnd = evenStart;        // pointing to second node of linked list

        while((evenEnd != NULL) && (oddEnd != NULL) && (evenEnd->next != NULL)){

            oddEnd->next = evenEnd->next;       //  pointing to next odd node
            oddEnd = evenEnd->next;             //  set oddEnd to next odd node
            evenEnd->next = oddEnd->next;       //  pointing to next even node
            evenEnd = evenEnd->next;            //  set evenEnd to next even node
        }

        oddEnd->next = evenStart;       // linking the start of even node to the end of odd node

        p = start;
        while(p != NULL){     
            cout<<p->val<<" ";
            p = p->next;
        }
    }
    
    return 0;
} 
