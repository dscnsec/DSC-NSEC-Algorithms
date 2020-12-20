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

    int n;
    cin>>n;
    int data;
    cin>>data;
    Node *head = new Node (data);
    Node *tail = head;
    for(int i = n-1; i > 0; i--)
    {
        cin>>data;
        tail->next = new Node(data);
        tail = tail->next;
    }
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