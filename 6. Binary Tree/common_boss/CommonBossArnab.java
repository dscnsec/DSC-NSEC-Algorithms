/**
 * CommonBossArnab.java
 * Required to find the lowest common Ancestor(lca) of multiple queries
 * Description:-
 * For finding the lca we would be using the process of Binary Lifting.
 * In binary lifting, we build a 2D array which stores ancestors of every node
 * In other words, p[i][j] will store the 2^j th ancestor of i
 * Thus, we can find lca every time in log(n)
 * Now, when we take 2 nodes u and v, we take the node that is further away from the root as u
 * At first, we run a loop and check if v is the ancestor of u
 * If it is, then u is our lca.
 * If it is not, then we have to run a loop again and find the node which is closest to the root which is not an ancestor to u or v,
 * but the node stored in p[x][0] is
 * Time Complexity-O(qlog(n)) where q is number of queries and n is number of nodes of a binary tree
 * Space Complexity-O(nlog(n))
 * @author [codebook-2000](https://github.com/codebook-2000)
 */
 
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayList;

public class CommonBossArnab {

    static void edge(ArrayList<Integer>[] adj, int u, int v) {
        adj[u].add(v);   //Adding Edges of the Binary Tree
    }

    static int lca(int u, int v, int[] l, int[][] p, int m, ArrayList<Integer>[] adj) {
        if (l[u] < l[v])  //swap the 2 values
        {
            int c;
            c = u;
            u = v;
            v = c;
        }


        for (int i = m; i >= 0; i--)
            if (l[p[u][i]] >= l[v]) u = p[u][i]; //parent which is at the same level as v
        if (u == v) return u;  //then return u;

        for (int i = m; i >= 0; i--)
            if (p[u][i] != p[v][i])    //u is currently at the same level as v, so we need to move up the tree as long as we can't find a common point
            {
                u = p[u][i];
                v = p[v][i];
            }
        return p[u][0];// then return that point
    }

    static void dfs(int u, int v, int[][] p, int[] l, int m, ArrayList<Integer>[] adj) {
        p[u][0] = v;
        l[u] = l[v] + 1;
        for (int i = 1; i <= m; i++)
            p[u][i] = p[p[u][i - 1]][i - 1];

        for (int x : adj[u])
            if (x != v) dfs(x, u, p, l, m, adj); //return the recursive call function
    }

    public static void main(String[] args) throws Exception {
        BufferedReader buf = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();
        int n = Integer.parseInt(buf.readLine());
        ArrayList<Integer>[] adj = new ArrayList[n];   //Forming an array of ArrayList

        for (int j = 0; j < n; j++)
            adj[j] = new ArrayList<Integer>();  //initializing every index of array as an arraylist

        int m = 18, N = 100010;
        int[][] p = new int[N][m + 1];
        int[] l = new int[N];

        for (int i = 0; i < n - 1; i++)  //all edges in parent-child format
        {
            String[] st = buf.readLine().split(" ");
            int u = Integer.parseInt(st[0]);
            int v = Integer.parseInt(st[1]);
            edge(adj, u, v);  //add the edge
        }
        int root = Integer.parseInt(buf.readLine());  //root
        dfs(root, root, p, l, m, adj);  //call the dfs function
        int q = Integer.parseInt(buf.readLine());  //Number of queries
        for (int j = 0; j < q; j++) {
            String[] st2 = buf.readLine().split(" ");
            int u = Integer.parseInt(st2[0]);
            int v = Integer.parseInt(st2[1]);
            int ans = lca(u, v, l, p, m, adj);  //call the lca function(Lowest common ancestor)
            sb.append(ans + "\n");  //append the ans
        }
        System.out.println(sb);  //printing it
    }
}

/*
Input:-
9
3 1
5 2
5 6
1 0
1 8
2 7
2 4
3 5
3
2
6 2
5 0

Output:-
5
3
*/