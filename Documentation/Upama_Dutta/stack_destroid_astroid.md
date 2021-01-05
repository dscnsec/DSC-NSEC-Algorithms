# Destroid Astroid

question can be found here : <a href="https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/Documentation/Upama_Dutta/stack_destroid_astroid.md"> here </a> <br>
Answer can be found here (bruteforce approch): <a href="https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/Documentation/Upama_Dutta/stack_destroid_astroid.md">here </a><br>

We can solve this problem by using vector and as well as Stack.
Vector Solution :
 Make an extra vector result, to store the resultant. take a for loop and traverse the whole
vector, and check, if result is empty, or last element is +ve but given vector[i] is -ve
then insert given vector[i] into the result vector and i increased by one,
otherwise, if the two element are same but their sign are opposite then  just increase the
i value with one.

Stack Solution :
The process is same, just change the result vector, and take a result stack.

Time complexity : O(n)<br>
Space complexity : O(n)