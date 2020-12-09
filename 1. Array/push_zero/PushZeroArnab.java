/**
 * PushZero.java
 * Given an array of integers,rearrange the array such that all zeroes are at the end without disturbing the orginal
   sequence
 * Description- 
 * Take the input array and make another output array.Store all non zero elements at the beginning of the output array,
 * and then return the output array.
 * Time Complexity-O(n) Extra Space Complexity-O(n)
 * @author [codebook-2000] (https://github.com/codebook-2000)
 */


import java.util.*;
import java.lang.*;
import java.io.*;

class Push_Zero
{
    static int[] solve(int n,int arr[])
    {
        int output[]=new int[n];
        int m=0;
        for(int j=0;j<n;j++)
        {
            if(arr[j]!=0) {
                output[m] = arr[j];  //All non zero elements are stored first
                m++;                 //Index of the output array is incremented
            }
        }
        return output;
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
            int arr[]=new int[n];
            for(int j=0;j<n;j++) {
                arr[j] = Integer.parseInt(st1[j]);  //Take the input 
            }
            int output[]=solve(n,arr);
            for(int j=0;j<n;j++)
                sb.append(output[j]+" ");  //Print the output array 
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