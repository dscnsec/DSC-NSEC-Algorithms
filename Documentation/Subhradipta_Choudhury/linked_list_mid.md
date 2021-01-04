# Mid
[Problem](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/5.%20Linked%20List/mid/mid.md)  
[Source code](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/5.%20Linked%20List/mid/%5BCPP%5Dmid_csubhradipta.cpp)  
## Explanation
Here, our task is to find the middle node of a given linked list.

We will take two node pointers - fast and slow

Both are initialized to `start`.

Here, ``fast`` will traverse the alternate nodes and `slow` will traverse each node.

```cpp
while(fast != NULL && fast->next != NULL){ 
	fast = fast->next->next;
    slow = slow->next;
}
```

 So, clearly we can see that `fast` is moving as twice as `slow`. Therefore, by the time `fast` reaches to NULL, `slow` will just reach the middle of the linked list.

And, that's our required answer.
 ## Space & Time complexities
Space Complexity: &emsp;O(n)  
Time &nbsp;Complexity: &emsp;O(n)

