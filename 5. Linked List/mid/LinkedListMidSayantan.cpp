/**
 * @file Mid
 * @brief Since you have been in this space mission for long enough, tasks are about to get a
          little tricky. The next task for the crewmates involves designing a linked list and
          finding the middle node and returning its value;
 * @approach We will be using the a pointer middle which will only increment itself when the
             count becomes odd . The count increases in every increment of the head pointer to
             the next value. This will ensure that the middle pointer will move half the list
             while the head pointer traverse the whole array
 * @details
 * Time Complexity O(n) and Space complexity O(n)
 * The next task is to find the middle element in the given linked list
 * Input :
   1 --> 2 --> 3 --> 4 --> 5
 * Output :
   3
 * @author [Sayantan Bose](https://github.com/sayantan1413)
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
    for(int i = n-1; i > 0; i--)
    {
        cin>>val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    //Checking for the middle element;
    int Count = 0;
    Node* middle = head;
    while(head != NULL)
    {
        //Checking for odd
        if(Count & 1)
        {
            //update the middle when the counter is odd
            middle = middle->next;
        }
        //count when the head goes to the next value
        ++Count;
        head = head->next;
    }
    if(middle != NULL)
    {
        cout<<middle->val<<endl;
    }
    return 0;
}

