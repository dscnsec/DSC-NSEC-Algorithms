# Missing Id

question can be found here : <a href="https://github.com/chaltidutta/DSC-NSEC-Algorithms/blob/master/1.%20Array/missing_id/missing_id.md"> here </a> <br>
Answer can be found here : <a href="https://github.com/chaltidutta/DSC-NSEC-Algorithms/blob/master/1.%20Array/missing_id/missing%20_id_chalti.cpp">here </a><br>

In this question we have to find the stack number where the id present.
And it is decleared that first stack contains 2 id.
So if the id number is 1 or two, then print 1.
But if, it is grater than that, then :
        the ans will be : (n-2)/x + 1
    for each id, the smallest stack number will be  (n-2)<=ans*x ;

Time Complexity : O(n)
Space Complexity : O(n)