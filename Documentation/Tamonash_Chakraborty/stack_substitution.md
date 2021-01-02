# Substitution

[Problem link](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/4.%20Stack/substitution/substitution.md)

We are given a string, and we have to check if it can be generated from `abc` only.<br>
The most ideal solution for this is to use stack.<br>
When we encounter an `a` or a `b`, we add it to the stack.<br>
Once we encounter a `c`, there are several possibilities-
* The topmost element of a stack is a `b` and we pop it
    * The topmost element is `a`, we pop it and continue to next iteration
    * The topmost element is not `a`, we add both `b` and `c` to stack
* The topmost element is not `b`, we add `c` and continue with our next iteration.

Now after our iterations are complete, if stack is empty, then it is possible to generate the string from `abc` only.<br>
Otherwise it is not possible.

Time complexity-O(n)<br>
Space complexity-O(n)

The code can be found [here](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/4.%20Stack/substitution/substitution_merlin.cpp).
