/**
 * Climb_Stairs_Arnab.java
 * given N stairs, and we can climb either 1 or 2 stairs at a time, calculate the number of ways we can reach N steps
 * Description:-
 * We can reach N stairs from N-1 stairs in 1 manner and we can reach N stairs from N-2 th stair in 1 manner. Therefore,
 * f(N)=f(N-1)+f(N-2) thats what the combinatories say.Its just a fibonacci sequence. Just solve it using recursion
 * Time Complexity-O(n^2) Space Complexity-O(1)
 * @author [codebook-2000](https://github.com/codebook-2000)
 */
 
import java.util.*;
import java.lang.*;
import java.io.*;

public class ClimbStairsArnab
{
    static int staircase(int n)
    {
        if(n==1)
            return 1;
        if(n==2)
            return 2;
        return staircase(n-1)+staircase(n-2);
    }
    public static void main (String[] args) throws java.lang.Exception
    {
        BufferedReader buf=new BufferedReader(new InputStreamReader(System.in));
        int t=Integer.parseInt(buf.readLine());
        StringBuilder sb=new StringBuilder();
        for(int i=0;i<t;i++)
        {
            int n=Integer.parseInt(buf.readLine());
            int ans=staircase(n);
            sb.append(ans+"\n");
        }
        System.out.println(sb);
    }
}
/*
Input:-
6
1
2
3
4
5
6

Output:-
1
2
3
5
8
13
*/
