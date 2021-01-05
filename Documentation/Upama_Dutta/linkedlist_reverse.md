# Reverse

<h3>Recursive Solution</h3><br><br>

question can be found here : <a href="https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/5.%20Linked%20List/reverse/reverse.md"> here </a> <br>
Answer can be found here : <a href="https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/5.%20Linked%20List/reverse/reverse(linkedlist_recursive)_chalti.cpp">here </a><br>

We are at the head, recursively reverse the remaining list.
The (head->next) is the next node, this node should be the second last node
in the reversed list. head would be the last node in the reversed list, so its
next should be NULL. And then we will return the reversed list.
<br>
<br>
<p align="center"><i>
if (head == NULL || head->next == NULL)
    {
        return head;
    }
    Node *newhead = reverse(head->next);
    head->next->next = head;
    head->next = NULL;
    return newhead;
</i><p>
<hr><hr>
<h3>3 pointer method<h3><br><br>
Answer can be found here : <a href="https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/5.%20Linked%20List/reverse/reverse(linkedlist_3P)_chalti.cpp">here </a><br>

We are at the head, recursively reverse the remaining list.
The (head->next) is the next node, this node should be the second last node
in the reversed list. head would be the last node in the reversed list, so its
next should be NULL. And then we will return the reversed list.
<br>
<br>
<p align="center"><i>
  if (head == NULL || head->next == NULL)
    {
        return head;
    }
    Node *newhead = reverse(head->next);
    head->next->next = head;
    head->next = NULL;
    return newhead;
</i><p>

Time complexity : O(n)
Space complexity : O(n)