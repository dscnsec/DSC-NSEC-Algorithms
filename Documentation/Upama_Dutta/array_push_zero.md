# push Zero

question can be found here : <a href="https://github.com/chaltidutta/DSC-NSEC-Algorithms/blob/master/1.%20Array/push_zero/push_zero.md"> here </a> <br>
Answer can be found here : <a href="https://github.com/chaltidutta/DSC-NSEC-Algorithms/blob/master/1.%20Array/push_zero/push_zero_chalti.cpp">here </a><br>

In this question we have to push the zeros at the end of the array.
two pointer method is used.
 initially the first and second pointer initialized at 0th possition, after that a loop is taken, upto when
 the first pointer becames grater than the length of the array.
 and each iteration of the loop it will be checking, if the value of first pointer is zero or not, 
 if it is zero, then swap the value with second and increase the second pointer with one.
 (here i have used swap stl function) and if it a[first pointer]
 is not zero then increse the first pointer with one.

 <p align="center">while(firstP<n){
        if(a[firstP] != 0){
            swap(a[firstP],a[scndP]);
            scndP++;
        }
        firstP++;
    }</p>

Time complexity : O(n)
Space complexity : O(n)

