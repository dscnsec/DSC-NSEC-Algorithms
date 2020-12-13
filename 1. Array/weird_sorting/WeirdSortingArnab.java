/**
 * WeirdSortingArnab.java
 * Given an array of integers containing 7,14 and 21.Sort them in a non-decreasing manner with O(n) time and space 
   complexity
 * Description:-
 * Here we keep track of 2 indices-left(for 7) and right(for 21) using 2 pointer approach, and then just run a loop from'
 * 0 to n-1 and swap when 7 and 21 are encountered and just increment i when 14 is encountered.
 * Finally we would achieve the formation which we want as 14 is not altered it would come in the middle. 
 * Time Complexity-O(n) Extra Space Complexity-O(1)
 * @author [codebook-2000] (https://github.com/codebook-2000)
 */
 

import java.util.*;
import java.lang.*;
import java.io.*;

class WeirdSortingArnab
{
    static void solve(int arr[],int n)
    {
        int i=0,left=0,right=n-1;    //left is the left indices which stores 7
        while(i<=right && left<=right)  //right is the end indices which stores 21
        {
            if(arr[i]==7)           //checking if value is 7 or not,if yes then we would swap with
            {                       //Left indices and then increment left
                if(arr[left]==7)    // Now if both left and i are same,then increment both else for different
                {                   //indices having same value increment only left
                    if(left==i) {
                        left++;
                        i++;
                    }
                    else
                    {
                        left++;
                    }
                }
                else
                {
                    int c=arr[left];     //Swap the values at the indices
                    arr[left]=arr[i];
                    arr[i]=c;
                    left++;
                }
            }
            else if(arr[i]==21)
            {
                if(arr[right]==21)
                {
                    right--;             //Same goes for this index as well as for left
                }
                else
                {
                    int c=arr[right];
                    arr[right]=arr[i];
                    arr[i]=c;
                    right--;
                }
            }
            else
                i++;
        }
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
            String st1[]=(buf.readLine()).split(" ");   // Take the input

            int arr[]=new int[n];
            for(int j=0;j<n;j++) {
                arr[j] = Integer.parseInt(st1[j]);
            }
            solve(arr,n);    //Call the method
            for(int j=0;j<n;j++)
                sb.append(arr[j]+" ");
            sb.append("\n");
        }
        System.out.println(sb);
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
