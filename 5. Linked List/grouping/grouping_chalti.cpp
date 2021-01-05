/**
 * grouping_chalti.cpp
 * 
 * description :-
 * 
 * The main thing what I have to do is, we have to link the odd first then even, and 
 * after that we have to link both the link first odd, then even.
 * So what we will do is, check, if the head or head->next = null then return.
 * then, take an node called odd to link odds and and even node as head->next to link the even
 * and take a while loop to make the condition, and start linking the odd and even, after that add the both odd and even list.
 * 
 * Time complexity : O(n)
 * Space complexity : O(1)
 * 
 *  @author[chaltidutta](https://github.com/chaltidutta)
 * **/

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

Node *grouping(Node *head){
    if (!head || !head->next)
        return head;

    Node *odd = head;
    Node *even = head->next, *evenHead = head->next;

    while (odd && even && odd->next && even->next)
    {
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even = even->next;
    }
    if (even)
        even->next = NULL;
    odd->next = evenHead;
    return head;
}

int main(){

    //making the linked list
    int n; //length of the linked list
    cin >> n;

    //taking element input of the linked list
    if (n > 0)
    {
        int data; //length of the ll
        cin >> data;
        Node *head = new Node(data);
        Node *tail = head;

        for (int i = n; i > 1; i--)
        {
            cin >> data;
            tail->next = new Node(data);
            tail = tail->next;
        }

        // removeImpst(head, M, N);
        head = grouping(head);
        while (head != NULL)
        {
            cout << head->data << " ";
            head = head->next;
        }
    }
    else
    {
        cout << "Null Linked List" << endl; //if the linked list is null
    }

    return 0;
}
//code contributed by chalti

/*
Sample Input :-
8
1 2 3 4 5 6 7 8
6
1 5 8 9 15 2

Sample Output :-
1 3 5 7 2 4 6 8
1 8 15 5 9 2
*/