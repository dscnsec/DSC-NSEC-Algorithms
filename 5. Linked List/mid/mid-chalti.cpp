/**
 * mid_chalti.cpp
 * 
 * description :-
 * 
 * To find the middle of a linked list here i have used two pointer method.
 * where, fast and slow pointer initially points the head, then after a single ineration the fast pointer will 
 * incre4ased by 2 times and slow pointer will increased by one times.
 * when the fast pointer will reached to the end the slow pointer will point to the middle, then we will simply
 * print the value of the slow pointer.
 * 
 * time complexity;- O(n) , space complexity:-O(n)
 * @author[chaltidutta](https://github.com/chaltidutta)
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

int main(){

    //making the linked list


    int n; //length of the linked list
    cin>>n;
    int data;
    cin>>data;
    Node *head = new Node (data);
    Node *tail = head;

    //taking element input of the linked list
    for(int i = n-1; i > 0; i--)
    {
        cin>>data;
        tail->next = new Node(data);
        tail = tail->next;
    } //linked list creating end

    //finding the middle element
    Node *slow_ptr = head;
    Node * fast_ptr = head;
    if(head !=  NULL){
        while (fast_ptr != NULL && fast_ptr->next != NULL){
            fast_ptr = fast_ptr->next->next ;
            slow_ptr = slow_ptr->next;
        }
        cout<<slow_ptr->data<<endl;
        
    }
    return 0;
}

/*
input :-
5
1 2 3 4 5
output :-
3
*/
