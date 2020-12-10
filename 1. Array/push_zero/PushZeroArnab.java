/**
 * PushZero.java
 * Given an array of integers,rearrange the array such that all zeroes are at the end without disturbing the orginal
   sequence
 * Description- 
 * Take the values of input and check if its non zero or not,If non-zero,then apend them to solution,else count the 
   No of occurences.The at the end,append the no of zeroes of that count.
 * Time Complexity-O(n) Space Complexity-O(1)
 * @author [codebook-2000] (https://github.com/codebook-2000)
 */


import java.util.*;
import java.lang.*;
import java.io.*;


class Push_Zero
{
    public static void main (String[] args) throws java.lang.Exception
    {
        // your code goes here
        BufferedReader buf=new BufferedReader(new InputStreamReader(System.in));
        int t=Integer.parseInt(buf.readLine());
        StringBuilder sb=new StringBuilder();
        for(int i=0;i<t;i++)
        {
            int n=Integer.parseInt(buf.readLine());
            String st1[]=(buf.readLine()).split(" ");
           int ct=0;
            for(int j=0;j<n;j++) {
                int a=Integer.parseInt(st1[j]);
                if(a!=0)
                    sb.append(a+" ");    //checking if the value is non zero then appending it to solution
                else
                    ct++;           //If zero then counting the no of zeroes
            }
           for(int j=1;j<=ct;j++)
               sb.append(0+" ");         //Then at the end appending all the zeroes
           sb.append("\n");
        }
        System.out.println(sb);
    }
}
/*
input:-
2
5
1 0 2 0 3
6
0 5 6 9 0 3
*/

/*
output:-
1 2 3 0 0 
5 6 9 3 0 0
*/