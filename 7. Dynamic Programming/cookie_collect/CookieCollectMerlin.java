/**
 * CookieCollectMerlin.java
 * Largest path in a matrix
 *
 * Description-
 * Start from the first index of the matrix, and calculate the maximum cost that can be possible for any index
 * For any index (i,j) dp[i][j]=max(dp[i+1][j+1],dp[i][j+1],dp[i-1][j+1]) since we can move right down, right, and right up respectively
 * Now we iterate through every cell of the matrix and call a function that would help us fetch the maximum path in a matrix form that cell
 * In order to prevent computing values of same cell multiple times, we use a dp array to store the values.
 * Finally, since starting point is not fixed, our answer will be the maximum across all entries in the dp matrix
 * 
 * Time Complexity-O(n*n), Space Complexity-O(n*n)
 *
 * @author merlin[https://github.com/m-e-r-l-i-n]
 */

import java.io.*;
import java.util.*;

class CookieCollectMerlin
{
    public static void main(String args[])throws Exception
    {
        BufferedReader bu=new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb=new StringBuilder();
        int t=Integer.parseInt(bu.readLine());
        while(t-->0)
        {

            int n=Integer.parseInt(bu.readLine());
            dp=new int[n][n]; a=new int[n][n];
            vis=new boolean[n][n];

            int i,j;
            for(i=0;i<n;i++)
            {
                String s[]=bu.readLine().trim().split(" ");
                for(j=0;j<n;j++)
                a[i][j]=Integer.parseInt(s[j]);
            }

            int ans=0;
            for(i=0;i<n;i++)
            for(j=0;j<n;j++)
            {
                if(!vis[i][j]) maximum(i,j,n);
                ans=Math.max(ans,dp[i][j]);
            }
            sb.append(ans+"\n");
        }
        System.out.print(sb);
    }

    static int dp[][],a[][];
    static boolean vis[][];

    static int maximum(int i,int j,int n)
    {
        if(i==n-1 && j==n-1) return a[i][j];    //last position, cant move anywhere from here
        if(vis[i][j]) return dp[i][j];  //already visited, no need to move again

        vis[i][j]=true;
        int add=0;
        if(i+1<n && j+1<n) add=Math.max(add,maximum(i+1,j+1,n));
        if(i-1>=0 && j+1<n) add=Math.max(add,maximum(i-1,j+1,n));
        if(j+1<n) add=Math.max(add,maximum(i,j+1,n));
        dp[i][j]=a[i][j]+add;
        return dp[i][j];
    }
}


/*
sample i/p-
1
4
1 3 1 5
2 2 4 1
5 0 2 3
0 6 1 2

sample o/p-
16
*/
