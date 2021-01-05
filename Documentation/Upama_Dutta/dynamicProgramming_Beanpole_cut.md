# Beanpole Cut

question can be found here : <a href="https://github.com/chaltidutta/DSC-NSEC-Algorithms/blob/master/7.%20Dynamic%20Programming/beanpole_cut/beanpole_cut.md"> here </a> <br>
Answer can be found here : <a href="https://github.com/chaltidutta/DSC-NSEC-Algorithms/blob/master/7.%20Dynamic%20Programming/beanpole_cut/beanpole_cut_chalti.cpp">here </a><br>

its acctually the Memoized-Rod-Cutting problem
The approch is Top-down with memoization(its memoization not memorization) In this approch we write the procedure 
recursively in a natural manner, but modified to save the result of sub-problem.usually in an array or hash table.
The producdure now fast checks to see wheater it has previously solved this sub-problem if so it returns the saved value
saving a furthur computation at this level, if not the procedure computes the value in the usual manner.We say that
the recursive procedure has been memoized it "remembers" what results it has computed previously.
<br><br>

time complexity;- O(n) <br>
space complexity:-O(n)