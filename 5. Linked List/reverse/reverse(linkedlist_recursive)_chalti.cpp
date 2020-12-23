/**
 * reverse(linkedlist_recursive)_chalti.cpp
 * 
 * description :-
 * 
 * We are at the head, recursively reverse the remaining list.
 * The (head->next) is the next node, this node should be the second last node
 * in the reversed list. head would be the last node in the reversed list, so its
 * next should be NULL. And then we will return the reversed list.
 * 
 * 
 * Time complexity : O(n)
 * Space complexity : O(n)
 * 
 *  @author[chaltidutta](https://github.com/chaltidutta)
 * **/

#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node (int val){
        data = val;
        next = NULL;
    }
};

Node * reverse(Node* &head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node* newhead = reverse(head->next);
    head->next->next = head;
    head->next = NULL;
    return newhead;
}

int main(){

    //making the linked list


    int n; //length of the linked list
    cin>>n;
    //taking element input of the linked list
    if(n>0){

        int data;
        cin>>data;
        Node *head = new Node (data);
        Node *tail = head;

        for(int i = n; i > 1; i--)
        {
            cin>>data;
            tail->next = new Node(data);
            tail = tail->next;
        } 
    
        Node* newhead = reverse(head);
        while(newhead != NULL){
            cout<<newhead->data<<" ";
            newhead = newhead->next;
        }
    }else{
        cout<<"Null Linked List"<<endl;
    }


    return 0;

}

/*

input :-
5
1 2 3 4 5

output :-
5 4 3 2 1
*/
