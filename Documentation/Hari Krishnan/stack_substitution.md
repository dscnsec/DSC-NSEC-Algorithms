# [Substitution](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/4.%20Stack/substitution/substitution.md)

### Objective

To find if the given string fulfills the given condition

### Intuition

In the string whenever we encounter a 'c' it is preceeded by 'ab'. We can use this condition to check the validity of the string.

### Approach

We use a stack to solve the problem. We also maintain a boolean variable(flag) to mark if the condition fails or not.<br>
We traverse the string and if the element we find is : 
<br>
- 'a' - we simply push this character into the stack
- 'b' - we simply push this character into the stack
- 'c' 
      <ol>
      <li> we check whether the size of the stack is greater than or equal to 2 and the top element in stack is 'b'. If not we mark flag as false and break out of the loop. If Yes then we pop the stack once<br>
      <li> Then we check whether the size of the stack is greater than or equal to 1 and the top element in stack is 'a'. If not we mark flag as false and break out of the loop. If Yes then we pop the stack once<br>
      <ol>
            
 Once we are out of the loop, check if the stack is empty and the flag is true, then the string fulfills the condition. Else the string fails to fulfill the condition.
<br> <br>


Time Complexity - O(n) <br>
Space Complexity - O(n) <br>


You can find my solution [here](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/4.%20Stack/substitution/substitution_harikrishnan.cpp)
