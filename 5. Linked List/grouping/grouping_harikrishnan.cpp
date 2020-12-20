/**
 * @file grouping_harikrishnan.cpp
 * @brief Here we need to group all odd nodes followed by even nodes.
 *
 * Description - We can consider two linked lists one having the odd and the other 
 *  having the even elements. We initialize the odd_head with the head node and the even_head with head->next node.
 *  Then traverse the linked list connecting these nodes to its corresponding alternate nodes.
 * Finally join the last node of the 'odd' linked list with the head of the 'even' linked list
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
 
void solve()
{
        int n;
        Node* curr;
        cin>>n; 
        
        Node* head = NULL; 
        
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
            else{
                temp_node =   new Node(temp_val);
                curr->next = temp_node;
                curr = curr->next;
            }
            
        }
        
        // If the given linked list is empty 
        if(head == NULL)
        { 
            cout<<endl;
            return; 
        }
        // If the given linked list has only one value
        if(head->next == NULL)
        {
            cout<<head->val<<endl;
            return;
        } 
        
        //Here odd and even pointers are used to traverse the odd and even linked lists.
        // even_head is used to mark the header node of even linked list.
        Node *odd = head;
        Node *even_head = head->next;
        Node *even = even_head;
        
        // Traverse the given linked list
        while(even && even->next)
        {
            odd->next = even->next;
            odd = odd->next;
            even->next = odd->next;
            even = even->next;
        }
    // Connect the last node of 'odd' linked list to the header node of 'even' linked list
        odd->next = even_head;
        curr = head;
        
        // Traverse the newly formed linked list and print the values
        while (curr->next != NULL) 
        {
            cout<<curr->val<<"-->";
            curr = curr->next;
        }
        cout<<curr->val<<endl;
    return;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}

/*

SAMPLE INPUT

4
5
1 2 3 4 5
7
1 3 5 7 2 4 6
3
1 3 2 
7
1 5 2 6 3 7 4

SAMPLE OUTPUT

1-->3-->5-->2-->4
1-->5-->2-->6-->3-->7-->4
1-->2-->3
1-->2-->3-->4-->5-->6-->7

*/
