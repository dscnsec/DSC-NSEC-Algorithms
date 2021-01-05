# Grouping

question can be found here : <a href="https://github.com/chaltidutta/DSC-NSEC-Algorithms/blob/master/5.%20Linked%20List/grouping/grouping.md"> here </a> <br>
Answer can be found here : <a href="https://github.com/chaltidutta/DSC-NSEC-Algorithms/blob/master/5.%20Linked%20List/grouping/grouping_chalti.cpp">here </a><br>

The main thing what I have to do is, we have to link the odd first then even, and 
after that we have to link both the link first odd, then even.
So what we will do is, check, if the head or head->next = null then return.
then, take an node called odd to link odds and and even node as head->next to link the even
and take a while loop to make the condition, and start linking the odd and even, after that add the both odd and even list.
<br><br>
<p align="center"><i>
if (!head || !head->next)<br>
        return head;<br>

    Node *odd = head;<br>
    Node *even = head->next, *evenHead = head->next;<br>

    while (odd && even && odd->next && even->next)<br>
    {<br>
        odd->next = even->next;<br>
        odd = odd->next;<br>
        even->next = odd->next;<br>
        even = even->next;<br>
    }<br>
    if (even)<br>
        even->next = NULL;<br>
    odd->next = evenHead;<br>
    return head;<br>
</i> </p><br><br>

Time complexity : O(n) <br>
Space complexity : O(1)