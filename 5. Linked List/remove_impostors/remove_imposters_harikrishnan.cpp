/**
 * @file remove_imposters_harikrishnan.cpp
 * @brief Here we need to remove all y imposters after x crewmates reprsented in a linked list.
 *
 *
 * Description - We can maintain a loop inside which the deletion of y nodes after x nodes keep on happening till the end of the linked list. 
 *
 *
 * Time Complexity - O(n) Space Complexity - O(n)
 * @author [Harikrishnan6336](https://github.com/Harikrishnan6336)
 **/

#include<bits/stdc++.h>
using namespace std;

class Node { 
public: 
    // val is the key or the value that 
    // has to be added to the data part 
    int val; 
    Node* next; 
    //Constructor to initialize the node value
    Node(int x)
    {
        val = x;
        next = NULL;
    }
}; 
 

int main()
{
    int x,y,n; // n is the size of the linked list
    cin>>x>>y>>n;
    Node* head = NULL;
    Node* curr; 
    
    // Input the values and create a linked list with header node as 'head'
        for(int i=0;i<n;i++)
        {
            int temp_val;
            Node* temp_node;
            
            cin>>temp_val;
            if(i==0)// Mark the first node as head node
            {
                head = new Node(temp_val);
                curr = head;
            }
            else
            {
                temp_node =   new Node(temp_val);
                curr->next = temp_node;
                curr = curr->next;
            }  
        }
        
    // Assign the header node to curr node, so as to traverse the loop.    
    curr = head;
        
    while(curr)
    {    
        // Traverse the x nodes that represents the crewmates.
        for (int cnt = 1 ; cnt < x &&  curr ; cnt++)  
            {
                curr = curr->next;  
            } 
            
        if (curr == NULL)
        {  
            break; 
        }

        // Store the node before the start node which is going to be deleted.
        Node* prev = curr;
    
        // Delete the next y nodes that represents the imposters.
        curr = prev->next;  
        for (int cnt = 1; cnt<=y && curr ; cnt++)  
        {  
            Node *temp = curr; 
            curr = curr->next;  
            free(temp);  
        } 

        // Link the previous node with the next node (node after the deleted nodes.) 
        prev->next = curr; 
    }
        
        // Traverse the newly formed linked list and print the values
        curr = head;
        while (curr->next != NULL) 
        {
            cout<<curr->val<<"-->";
            curr = curr->next;
        }
        cout<<curr->val<<endl;
    
    return 0;
}

/*
SAMPLE INPUT

2 3 10
1-->2-->3-->4-->5-->6-->7-->8-->9-->10

SAMPLE OUTPUT

1-->2-->6-->7

*/
