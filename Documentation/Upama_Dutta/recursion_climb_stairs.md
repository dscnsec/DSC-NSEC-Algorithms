# Climb Stairs

question can be found here : <a href="https://github.com/chaltidutta/DSC-NSEC-Algorithms/blob/master/3.%20Recursion/climb_stairs/climb_stairs.md"> here </a> <br>
Answer can be found here : <a href="https://github.com/chaltidutta/DSC-NSEC-Algorithms/blob/master/3.%20Recursion/climb_stairs/climb_Stairs_upama.cpp">here </a><br>

At first as it is solved by recursion, so i have made a recursive function, named "recursiveSol" . base cases are if the value of n is equal to zero and one, then it will return one, and if n is equal to two, then it will return two.

<p align="center"><i>
if(n==1 || n==0){
        return 1;
    }
    else if(n==2){
        return 2;
</i></p><br>

After the base case it will call the recursive call for the values of n-1,n-2 and n-3 and return the sum of all three calls, 
that means, it will return sum of(recursiveSol(n-1)+recursiveSol(n-2))

<p align="center"><i>
    else{
        //recursive call
        return recursiveSol(n-1)+recursiveSol(n-2);
</i></p><br>

Time complexity-O(n) 
Space complexity-O(1)

