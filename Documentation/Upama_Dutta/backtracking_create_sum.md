# Create Sum

question can be found here : <a href="https://github.com/chaltidutta/DSC-NSEC-Algorithms/blob/master/8.%20Backtracking/create_sum/create_sum.md"> here </a> <br>
Answer can be found here : <a href="https://github.com/chaltidutta/DSC-NSEC-Algorithms/blob/master/8.%20Backtracking/create_sum/Create_Sum_chalti.cpp">here </a><br>

sort the array in a increasing order. then remove all the duplicates from the array and then use
recursion and backtracking to solve thw problem - 
      1. if at any time sub-problem sum equals to zero, then add that array to the result array to the result .
      2. else if sum is negative, then ignore that sub-problem.
      3. else insert the present array in that index to the current vector and call the function with sum = sum - A[index]
         and index = index, then pop that element from curr index (backtracking) and call the funtion with sum and index+1 .
<br><br>
<p align="center"><i>
for(int i = index; i < A.size(); i++)<br>
    {<br>
        if(sum - A[i] >= 0)<br>
        {<br>
            temp.push_back(A[i]);<br>
            sum = sum - A[i];<br>
            
            //recursive call<br>
            calSum(A, sum, temp, i, res);<br>
            
            sum = sum + A[i];<br>
            //remove number (backtracking)<br>
            temp.pop_back();<br>
        }<br>
    }<br>
</i></p><br><br>

Time Complexity :- O(n*sum)   <br>
Space Complexity :- O(n*number of possible combination)