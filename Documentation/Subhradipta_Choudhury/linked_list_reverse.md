# Reverse
[Problem](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/5.%20Linked%20List/reverse/reverse.md)  
[Source code](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/5.%20Linked%20List/mid/%5BCPP%5Dmid_csubhradipta.cpp)  
## Explanation
Here, our task is to reverse a linked list. 
 
We will take two node pointers `prev` and `p`.  

Set `prev` and `next` to NULL and `p` to `start`.

While `p` not reaches to NULL-
- Reverse the node pointer
	```cpp
	next = p->next;
	p->next = prev; 
	 ``` 
- Then set the nodes for next iteration
	```cpp
	prev = p;
	p = next;
	```

Once the above operations are done, set the ``prev`` as ``start``.

 ## Space & Time complexities
Space Complexity: &emsp;O(n)  
Time &nbsp;Complexity: &emsp;O(n)

