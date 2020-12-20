/**
 * @file : [CPP]mid_csubhradipta.cpp
 * @brief: Find middle node of a linked list and show its value
 * @details:
 * INSERT elements (first taking input for number of nodes from user)
 * Take two node pointers and initialize them from start
 * fast will traverse two step while slow will one 
 * and so, by the time fast reaches to null, slow will just reach the middle
 * print the node element where slow points
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
    
    Node *fast = start, *slow = start;
    
    while(fast != NULL && fast->next != NULL){ 
        fast = fast->next->next;                // moving two step forward
        slow = slow->next;                      // moving one step forward
    }
    
    cout<<slow->val;
    
    return 0;
} 
