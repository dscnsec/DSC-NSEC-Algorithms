# 5% mean

question can be found here : <a href="https://github.com/chaltidutta/DSC-NSEC-Algorithms/blob/master/1.%20Array/5%25_mean/5%25_mean.md"> here </a> <br>
Answer can be found here : <a href="https://github.com/chaltidutta/DSC-NSEC-Algorithms/blob/master/1.%20Array/5%25_mean/5%25_mean_chalti.cpp">here </a><br>

  what we have to do, we have to find the  the mean of the remaining integers after removing the smallest 
  5% and largest 5% of the elements.
  so, to solve that first we will sort the array, then we will find the 5% smallest and 5% largest number, and then
  we will find the total(sum) of those numbers which lies between 5% largest and 5% smallest number, and also i have 
  taken a count variable to count the total number of array element which lies between those.
  after finding the sum and the number of elements i have printed the mean by dividing the sum and count.

  Time complexity : O(nlogn) <br>
  Space Complexity : O(1)
