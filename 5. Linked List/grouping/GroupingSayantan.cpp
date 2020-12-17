/**
 * @file Grouping
 * @brief The task of a crewmate revolves around group all odd and even nodes in a linked list.
          Note that the grouping depends not on the node value but on the node index.
 * @approach We will be using two pointer on for odd and other for even. Now we will store the first pointer of even node
             and we will make two different list one for odd and the other for even. Then we connect the odd next pointer
             to the temporary variable that we stored in the even list. Then we connect the odd and the even list.
 * @details
 * Time Complexity O(n) and Space complexity O(n)
 * Your next task as a crewmate revolves around group all odd and even nodes in a linked list. Note
   that the grouping depends not on the node value but on the node index.
 * Input :
   1-->5-->8-->9-->15-->2
 * Output :
   1-->8-->15-->5-->9-->2
 * @author [sayantan1413](https://github.com/sayantan1413)
 */

#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    // val is the key or the value that
    // has to be added to the data part
    int val;
    Node* next;
    Node (int x){
        val = x;
        next = NULL;
    }
};

//Main function
int main()
{
    //write your code here,
    //including forming linked list
    // and taking input
    int n;
    cin>>n;
    int val;
    cin>>val;
    Node *head = new Node (val);
    Node *tail = head;
    for(int i = 0; i< n-1; ++i)
    {
        cin>>val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    //code to group the odd and even node according to the index number
    if (head == NULL)
        return NULL;

    // Making the first node as odd and even list
    Node *odd_node = head;
    Node *even_node = head->next;

    Node *even_node_first = even_node;

    while (1)
    {
        if (!odd_node || !even_node || !(even_node->next))
        {
            odd_node->next = even_node_first;
            break;
        }

        // Now connecting the odd nodes
        odd_node->next = even_node->next;
        odd_node = even_node->next;

        // If there exist no more even nodes after the immediate odd node
        if (odd_node->next == NULL)
        {
            even_node->next = NULL;
            odd_node->next = even_node_first;
            break;
        }

        // Now connecting the even nodes
        even_node->next = odd_node->next;
        even_node = odd_node->next;
    }


    Node *t;
    t=head;
    while(head != NULL)
    {
        cout<<head->val;
        head = head->next;
        if(head != NULL)
        {
            cout<<"-->";
        }
    }
    cout<<endl;
    head = t;
    return 0;
}
