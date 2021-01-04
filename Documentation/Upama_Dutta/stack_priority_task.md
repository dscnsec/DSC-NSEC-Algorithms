# Priority Task

question can be found here : <a href="https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/4.%20Stack/priority_tasks/priority_tasks.md"> here </a> <br>
Answer can be found here (bruteforce approch): <a href="https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/4.%20Stack/priority_tasks/prioriy_task(bruteforce)_chalti.cpp">here </a><br>
Answer can be found here (optimal approch): <a href="https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/4.%20Stack/priority_tasks/priority_task(most_optimal)_chalti.cpp">here </a><br>

<h3>
Bruteforce Approch : <br><hr>
</h3>
In this method, we are taking two for loop, and check for finding the grater element, if it found, then break the loop
and print the value, if there is no grater element, then, prints -1, which is the innitial value of the 
temp variable. <br>
Time complexity : O(n^2) <br>
Space complexity : O(n) <br><br>

<h3>
Optimal Approch : <br><hr>
</h3>
To solve this problem, we will be taking an temp vector to store the grater value, to find the grater value, 
 we will do :-
 As this is a circular type array, so we will consider the input array its double size, the first half will be its own value, and the 
 other half, their will be the repitation of the first half elements.
 we will be taking an stack to make our finding process easy
 now to find the grater element, we will traverse the stack(N+N length) for each element of
 the array and pop each element of the stack,ckaek if the element is grater or not, if the found element 
 is grater than the comparing element, then push it into the vector.
 After that push the element into the stack.  <br><br>

 Time complexity : O(n) <br>
 Space complexity : O(n)