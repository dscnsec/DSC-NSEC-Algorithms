# Mid

question can be found here : <a href="https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/5.%20Linked%20List/mid/mid.md"> here </a> <br>
Answer can be found here : <a href="https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/5.%20Linked%20List/mid/mid-chalti.cpp">here </a><br>

To find the middle of a linked list here i have used two pointer method.
where, fast and slow pointer initially points the head, then after a single ineration the fast pointer will 
incre4ased by 2 times and slow pointer will increased by one times.
when the fast pointer will reached to the end the slow pointer will point to the middle, then we will simply
print the value of the slow pointer.
<br><br>

<p align="center"><i>
 while (fast_ptr != NULL && fast_ptr->next != NULL){
            fast_ptr = fast_ptr->next->next ;
            slow_ptr = slow_ptr->next;
}
</i></p> <br><br>

time complexity;- O(n) 
space complexity:-O(n)