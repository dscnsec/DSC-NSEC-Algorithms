/**
 * PatternPrintingArnab.java
 * Given an integer n,we have to print the right-angled triangle pyramid pattern usig recursion
 * Description:-
 * Two functions would be required ,one function to change the rows and update n and one function to print values in a 
 * single row
 * In the solve function where we are printing the rows, we are passing the maximum value in that row as parameters and decresing 
 * recursively uptill 1 and then printing from the lowest value that is 1
 * The pattern function just calls the solve function,then updates the row and the maximum element in that row recursively
 * Just what we do using 2 for-loops here we ae doing in two recursive functions
 * Time Complexity-O(n^2) Space Complexity-O(1) (Although in Recursion it uses stack call,so values get assigned in the form of
 * a stack,so some space gets occupied there)
 * @author [codebook-2000](https://github.com/codebook-2000)
 */
 
import java.util.*;
import java.lang.*;
import java.io.*;

public class Pattern_Printing
{
    static void solve(int num)
    {
        // base case
        if (num == 0)
            return;


        // recursively calling solve()
        solve(num - 1);
        System.out.print (num+" ");
    }

    // function to print the pattern
    static void pattern(int n, int i)
    {
        // base case
        if (n == 0)
            return;
        solve(i);
        System.out.println();

        // recursively calling pattern()
        pattern(n - 1, i + 1);
    }
    public static void main (String[] args) throws java.lang.Exception
    {
        BufferedReader buf=new BufferedReader(new InputStreamReader(System.in));
        int t=Integer.parseInt(buf.readLine());
        for(int i=0;i<t;i++)
        {
            int n=Integer.parseInt(buf.readLine());  //Taking input
            pattern(n,1);       //This function prints the pattern.n is the no of rows and 1 is the value where every row
        }                       //Starts from
    }
}

/*
Input:-
1
5

Output:-
1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 
*/
