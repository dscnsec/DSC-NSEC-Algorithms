/**
 * CrewmateImposterNooneMerlin.java
 *
 * Find number of islands in a matrix
 *
 * Description-
 * We are given a character grid, with \ / or _
 * We are only interested in \ and /, as they are the ones dividing the grid
 * Now, for any box of the grid, we can convert it to a 3x3 grid
 * After the conversion, all we are interested in is finding number of islands in thr matrix
 * This can be done using a simple boolean array
 *
 * Time Complexity-O(9*n*n)~O(n^2)
 * Space Complexity-O(9*n*n)~O(n^2)
 *
 * @author merlin[https://github.com/m-e-r-l-i-n]
 */
import java.io.*;

class CrewmateImposterNooneMerlin
{
    public static void main(String args[])throws Exception
    {
        BufferedReader bu=new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb=new StringBuilder();
        int t=Integer.parseInt(bu.readLine());
        while(t-->0)
        {
            int n=Integer.parseInt(bu.readLine());
            String g[]=new String[n];
            int i;
            for(i=0;i<n;i++)
            g[i]=bu.readLine();
            int ans=count(g);
            sb.append(ans+"\n");
        }
        System.out.print(sb);
    }

    static int count(String grid[])
    {
        int n=grid.length,i,j;
        boolean g[][]=new boolean[3*n][3*n];
        /*
        consider the character '/'
        this can be turned into a 3x3 grid
        001
        010
        100
        thus, we can see that 2 different segments will be formed
        and we will use a boolean array to mark them
         */

        //System.out.println(grid[1].charAt(0));
        for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        if(grid[i].charAt(j)=='/') g[i*3][j*3+2]=g[i*3+1][j*3+1]=g[i*3+2][j*3]=true;
        else if(grid[i].charAt(j)=='\\') g[i*3][j*3]=g[i*3+1][j*3+1]=g[i*3+2][j*3+2]=true;

        int ans=0;
        for(i=0;i<3*n;i++)
        for(j=0;j<3*n;j++)
        if(!g[i][j])    //a new region added
        {
            ans++;
            fill(g,i,j,3*n);    //we will mark all regions that can be visited from here
        }
        return ans;
    }

    static void fill(boolean g[][],int i,int j,int n)   //simple dfs
    {
        if(i<0 || j<0 || i>=n || j>=n || g[i][j]) return;
        g[i][j]=true;
        fill(g,i-1,j,n);
        fill(g,i+1,j,n);
        fill(g,i,j-1,n);
        fill(g,i,j+1,n);
    }
}


/*
sample input-
5
2
_/
/_
2
_/
__
2
\/
/\
2
/\
\/
2
//
/_

sample output-
2
1
4
5
3
 */
