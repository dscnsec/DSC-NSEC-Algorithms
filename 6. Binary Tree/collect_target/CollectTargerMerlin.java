/**
 * CollectTargerMerlin.java
 * Check if any root to leaf path has a given sum
 *
 * Description-
 * For any node, number of coins from root to that node=total coins from root to its parent+coins in that node
 * Hence we calculate total path sums for all leaf nodes
 * Our ans will be true if a path sum=desired sum and no otherwise
 *
 * Time Complexity-O(n), Space Complexity-O(n)
 *
 * @author merlin[https://github.com/m-e-r-l-i-n]
 */

import java.io.*;
import java.util.*;

class CollectTargerMerlin
{
    public static void main(String args[])throws Exception
    {
        BufferedReader bu=new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb=new StringBuilder();
        int n=Integer.parseInt(bu.readLine());
        ArrayList<Integer> g[]=new ArrayList[n];
        int i,sum[]=new int[n],par[]=new int[n];
        for(i=0;i<n;i++) g[i]=new ArrayList<>();

        for(i=0;i<n-1;i++)  //all edges in parent-child format
        {
            String s[]=bu.readLine().split(" ");
            int u=Integer.parseInt(s[0])-1,v=Integer.parseInt(s[1])-1;
            g[u].add(v);
        }
        int r=Integer.parseInt(bu.readLine());  //root
        int s=Integer.parseInt(bu.readLine());  //target sum

        Queue<Integer> q=new LinkedList<>();
        q.add(0);
        sum[0]=1;   //coins of any node=node number itself(1 based)
        boolean ans=false;
        while(!q.isEmpty()) //perform bfs
        {
            int p=q.poll();
            for(int x:g[p])
            if(x!=par[p])
            {
                par[x]=p;
                sum[x]=sum[p]+x+1;
                q.add(x);
            }

            if(g[p].size()==0 && sum[p]==s)  //this means that the node is a leaf and we have found a path
            {
                ans=true;
                break;
            }
        }
        if(ans) sb.append("True\n");
        else sb.append("False\n");
        System.out.print(sb);
    }
}


/*
input format-
number of nodes
parent1 child1
parent2 child2
...
parent(n-1) child(n-1)
root
desired sum

sample i/p-
6
1 4
1 2
4 3
2 5
2 6
1
8

sample o/p-
True
*/
