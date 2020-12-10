/**
 * TaskPrerequisiteMerlin.java
 *
 * Check if a cycle exists in a graph
 *
 * Description-
 * The graph will be given as an adjacency list.
 * We will start iterating from 0 to N-1 and check if there is a task which has not yet been checked
 * If the task has pre-requisites then iterate through the prerequisites and find out if a cycle is formed
 * A cycle is formed when the prerequisite of a task is the task itself (eg 1->2->3->1)
 * If a cycle is formed then the tasks cannot be completed
 * If no cycle is formed, task can be completed
 *
 * Time Complexity-O(n), Space Complexity-O(n)
 * @author merlin[https://github.com/m-e-r-l-i-n]
 */

import java.io.*;
import java.util.*;

class TaskPrerequisiteMerlin
{
    static BufferedReader bu=new BufferedReader(new InputStreamReader(System.in));
    static boolean solve()throws Exception
    {
        String s[]=bu.readLine().trim().split(" ");
        int n=Integer.parseInt(s[0]),k=Integer.parseInt(s[1]),i;
        ArrayList<Integer> g[]=new ArrayList[n];
        for(i=0;i<n;i++)
            g[i]=new ArrayList<>();

        for(i=0;i<k;i++)
        {
            s=bu.readLine().split(" ");
            int u=Integer.parseInt(s[0]),v=Integer.parseInt(s[1]);
            g[u].add(v);
        }

        boolean vis[]=new boolean[n],okay[]=new boolean[n];
        for(i=0;i<n;i++)
        if(!vis[i])         //task not yet completed
            if(cycle(g,vis,okay,i))  // if cycle exists, we cannot complete tasks
            return false;
        return true;
    }

    static boolean cycle(ArrayList<Integer> g[],boolean vis[],boolean okay[],int n)
    {
        /*
        g is graph
        vis is visited array
        okay is for checking if node is not part of a cycle
        n is current node
         */

        vis[n]=true;
        for(int x:g[n])
        if(!vis[x])
        {
            if(cycle(g,vis,okay,x))  //cycle found
                return true;
        }
        else if(!okay[x])
            //this is an interesting scenario, if we have a node visited, but it is part of an undetected cycle, we detect the cycle here
            return true;

        okay[n]=true;
        return false;
    }

    public static void main(String args[])throws Exception
    {
        StringBuilder sb=new StringBuilder();
        int t=Integer.parseInt(bu.readLine());
        while(t-->0)
        {
            boolean ans=solve();
            if(ans) sb.append("YES\n");
            else sb.append("NO\n");
        }
        System.out.print(sb);
    }
}


/*
sample i/p-
3
2 1
1 0
4 4
1 0
2 0
3 1
3 2
2 2
1 0
0 1

sample o/p-
YES
YES
NO
 */
