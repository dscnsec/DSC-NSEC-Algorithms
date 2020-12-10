/**
 * PushZero.java
 * Given an array of integers,rearrange the array such that all zeroes are at the end without disturbing the orginal
   sequence
 * Description- 
 * Take the values of input and check if its non zero or not,If non-zero,then apend them to solution,else count the 
   No of occurences.The at the end,append the no of zeroes of that count.
 * Time Complexity-O(n) Extra Space Complexity-O(1)
 * @author [codebook-2000] (https://github.com/codebook-2000)
 */


import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Push_Zero
{
    static int arr[];
    static void solve(int arr[],int n)
    {
        int zero=0;
        for(int j=0;j<n;j++)
        {
            if(arr[j]==0)
                zero++;
        }
        int m=0,j=0;
        while(j<n)
        {
            if(arr[j]!=0)
            {
                arr[m]=arr[j];
                m++;
            }
            j++;
        }
        for(j=m;j<n;j++)
            arr[j]=0;
    }
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
           arr=new int[n];
           for(int j=0;j<n;j++)
               arr[j]=Integer.parseInt(st1[j]);
            solve(arr,n);
            for(int j=0;j<n;j++)
                sb.append(arr[j]+" ");
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
