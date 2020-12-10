/**
 * WeirdSortingArnab.java
 * Given an array of integers containing 7,14 and 21.Sort them in a non-decreasing manner with O(n) time and space 
   complexity
 * Description:-
 * Count occurences of 7,14 and 21 in 3 separate variables.Then just add each value in the same array starting from 7
 * When 7 ends,add 14 and when 14 ends fill up rest with 21.
 * Time Complexity-O(n) Extra Space Complexity-O(1)
 * @author [codebook-2000] (https://github.com/codebook-2000)
 */
 
import java.util.*;
import java.lang.*;
import java.io.*;


class Weird_Sorting
{
    static BufferedReader buf=new BufferedReader(new InputStreamReader(System.in));
    static int arr[];
    static void solve() throws java.lang.Exception
    {
        int n=Integer.parseInt(buf.readLine());
        String st1[]=(buf.readLine()).split(" ");      //Take input from user

        arr=new int[n];
        int cnt7=0,cnt14=0,cnt21=0;
        for(int j=0;j<n;j++) {
            arr[j] = Integer.parseInt(st1[j]);
            if(arr[j]==7)            //Counting the no of 7's
                cnt7++;
            if(arr[j]==14)            //Counting the no of 14's
                cnt14++;
            if(arr[j]==21)            //Counting the no of 21's
                cnt21++;
        }
        for(int j=0;j<n;j++)
        {
            if(cnt7>0)                
            {
                arr[j]=7;           //Modifying the array by first putting all 7 into it and decreasing the count.
                cnt7--;
            }
            else if(cnt14>0)
            {  
                arr[j]=14;          //When 7 gets finished start with 14
                cnt14--;
            }
            else
            {
                arr[j]=21;         //When 14 gets finished fill the rest with 21.
                cnt21--;
            }
        }
     for(int j=0;j<n;j++)
         System.out.print(arr[j]+" ");  //Now print the array 
     System.out.println();

    }
    public static void main (String[] args) throws java.lang.Exception
    {
        // your code goes here

        int t=Integer.parseInt(buf.readLine());

        for(int i=0;i<t;i++)
        {
           solve();        //Call the method;
        }
    }
}

/*
input:-
1
10
7 21 7 7 7 21 14 14 21 7

Output:-
7 7 7 7 7 14 14 21 21 21 
*/
