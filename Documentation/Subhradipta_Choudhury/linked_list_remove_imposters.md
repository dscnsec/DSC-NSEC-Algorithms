# Remove Imposters
[Problem](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/5.%20Linked%20List/remove_impostors/remove_impostors.md)  
[Source code](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/5.%20Linked%20List/remove_impostors/%5BCPP%5Dremove_imposters_csubhradipta.cpp)  
## Explanation
Here, our task is to delete _y_ number of nodes after every _x_ number of nodes from a given linked list.

We will take a node pointer ``p`` and initialize it to ``start``.

While _p_ not reaches to NULL-
- We will skip node _x_ times  
	```cpp
	while(x-- && p != NULL)
            p = p->next;
	```
	
- We will take a node pointer ``ptr`` which will hold the next node to ``p`` .
	```cpp
	ptr = p->next;
	```  
	
- After skipping _x_ number of nodes, we will delete the _(x+1)<sup>th</sup>_ node _y_ times.
	- We will take another node pointer ``temp`` which will hold the ``ptr`` .
	- Set ``ptr = ptr->next;``
	- Now, free the temp node.
	```cpp
	while(y-- && ptr != NULL && temp != NULL){  
        temp = ptr;
        ptr = ptr->next;
	    free(temp);
    }
	```
- At last, set ``p->next = ptr;`` , to continue the iteration for rest of the nodes.

 ## Space & Time complexities
Space Complexity: &emsp;O(n)  
Time &nbsp;Complexity: &emsp;O(n)

