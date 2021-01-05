
# Substitution
[Problem](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/4.%20Stack/substitution/substitution.md)   
[Source code](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/4.%20Stack/substitution/%5BCPP%5Dsubstitution_csubhradipta.cpp)    
## Explanation
Here, we've to check whether or not the string is in the combination of **"abc"** or **X<sub>left</sub> + "abc" + X<sub>right</sub>** where **X<sub>left</sub> + X<sub>right</sub>** is **"abc"** .

This will be carried out with the help of a stack.  

Let's take, stack as ``st`` , the given string as ``str`` and a character variable ``ch``.

In each iteration-  
- If the stack is empty, then push the character into it.
- Else set ``ch = st.top()`` and pop it from stack 
	- Now, if stack st is not empty and  
			``str[i] ==  "c"`` ,  ``ch == "b"`` and ``st.top() == "a"``  
			then, pop from stack.
	- Else, push ``ch`` back to stack, and push ``str[i]`` after it.

Now see if the stack is empty, then print "YES", as the string satisfies the given conditions. Else, print "NO".


## Space & Time complexities
Space Complexity: &emsp;O(n)  
Auxiliary space: O(1)  
Time &nbsp;Complexity: &emsp;O(n)

