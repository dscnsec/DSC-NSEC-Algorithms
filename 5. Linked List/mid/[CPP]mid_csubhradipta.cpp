/**
 * @file : [CPP]mid_csubhradipta.cpp
 * @brief: Find middle node of a linked list and show its value
 * @details:
 * INSERT elements (first taking input for number of nodes from user)
 * COUNT number of nodes and set MID = COUNT/2 + 1
 * Iterate till MID node and print its value
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
    cin>>n;		// taking number of nodes as input from user
    
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
    
    int count = 0;
    
    p = start;
    while(p != NULL){       // counting number of nodes
    	p = p->next;
        count++;
    }
    
    int mid = count/2 + 1, i = 1;   // finding mid postion
    
    p = start;
    while(p != NULL){      // iterating till mid position
        if(i == mid){
    	    cout<<p->val;
    	    break;
        }
    	p = p->next;
    	i++;
    }
    
    return 0;
} 