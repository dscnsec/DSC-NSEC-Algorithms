/**
 * LinkedList_reverse_reethik
 * To reverse the linked list 
 * Given pointer to the head node of a linked list, the task is to reverse the linked list.
   We need to reverse the list by changing the links between nodes.
 
 * Description:-
   Here we have three functions 
   >Insert Head 
   >Take input
   >Reverse 
   >print
   Here first we take input from the user unitl they enter -1 and then first we print hreir input
   and then reverse it adn display the final output

 * @author [Reethik](https://github.com/reethikprasad)
 */


#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int d)
    {
        data = d;
        next = NULL;
    }
};

void reverse(node *&head)
{
    node *C = head;
    node *P = NULL;
    node *N;
    while (C != NULL)
    {
        N = C->next;
        C->next = P;
        //change the order
        P = C;
        C = N;
    }
    head = P;
}

void insertHead(node *&head, int data)
{
    if (head == NULL)
    {
        head = new node(data);
        return;
    }
    node *n = new node(data);
    n->next = head;
    head = n;
}

node *takeInput()
{
    int d;
    cin >> d;
    node *head = NULL;
    while (d != -1)
    {
        insertHead(head, d);
        cin >> d;
    }
    return head;
}

void print(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << endl;
}

ostream &operator<<(ostream &os, node *head)
{
    print(head);
    return os;
}
istream &operator>>(istream &is, node *&head)
{
    head = takeInput();
    return is;
}

int main()
{
    node *head;
    cin >> head;
    cout << head << endl;
    reverse(head);
    cout << head;

    return 0;
}

/*
Input:
1 2 3 4 5 6 -1

Output:
6 -> 5 -> 4 -> 3 -> 2 -> 1 -> 

1 -> 2 -> 3 -> 4 -> 5 -> 6 ->
*/
