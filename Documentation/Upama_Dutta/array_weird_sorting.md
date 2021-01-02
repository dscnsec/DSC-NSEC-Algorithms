# Weird Sorting

question can be found here : <a href="https://github.com/chaltidutta/DSC-NSEC-Algorithms/tree/master/1.%20Array/weird_sorting"> here </a> <br>
Answer can be found here : <a href="https://github.com/chaltidutta/DSC-NSEC-Algorithms/blob/master/1.%20Array/weird_sorting/Weird_Sorting_chalti.cpp">here </a><br>

the main concept is here using three pointer, we will swap the values in a process,like in the middle 
 their will be 14,so we will do nothing if we found 14,  but if qwe found 7 or 21, then we will shift it 
 left and right of 14 accordenately.
  
 
 three pointer has been taken, one is high second is middle and last one is low, low and middle initially
 indicates o th possiton, and high indicates the last possition, and here we will take a loop while 
 middle<=high , and we will check if a of middle possition is 7 or not, if it is, then we will
 swap the low and middle value, and increase low and middle with one. 
 again check for 21 value, with the same process.

 <p align="center">   while(middle<=high){
        if(a[middle]==7){
            swap(a[middle],a[low]);
            low=low+1;
            middle++;
        }
        
        else if(a[middle]==21){
            swap(a[middle],a[high]);
            high--;
        }
        else{
            middle++;
        }
    } </p>

Time Complexity :- O(N)
Space Complesity :- O(N)