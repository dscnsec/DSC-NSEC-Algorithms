/**
 * CollectTargetArnab.java
 * To Check if there is any root to leaf path has a given sum
 * Description-
 * For any node, number of coins from root to that node is equal to the total coins from root to its parent plus 
 * coins in that node. Hence we calculate total path sums for all leaf nodes through bfs(Breadth-First Search).
 * Then checking if Our ans will be equal to the desired sum,then  return true else return false.
 * Time Complexity-O(n), Space Complexity-O(n)
 * @author [codebook-2000](https://github.com/codebook-2000)
 */
 
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Queue;

public class CollectTargetArnab {
    static void edge(ArrayList<Integer>[] adj, int u, int v) {
        adj[u].add(v); //Adding the edges of Binary tree
    }

    public static void main(String[] args) throws Exception {
        BufferedReader buf = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();
        int n = Integer.parseInt(buf.readLine());
        ArrayList<Integer>[] adj = new ArrayList[n];

        int[] sum = new int[n];
        int[] arr = new int[n];
        for (int i = 0; i < n; i++)
            adj[i] = new ArrayList<>(); //Initializing the ArrayList

        for (int i = 0; i < n - 1; i++)  //all edges in parent-child format
        {
            String[] st = buf.readLine().split(" ");
            int u = Integer.parseInt(st[0]);
            int v = Integer.parseInt(st[1]);
            u--;  //Decrement it by 1 to match index
            v--;
            edge(adj, u, v);
        }
        int root = Integer.parseInt(buf.readLine());  //root
        int s = Integer.parseInt(buf.readLine());  //target sum

        Queue<Integer> q = new LinkedList<>();  //Declare a queue
        q.add(0);
        sum[0] = 1;   //Initializing the starter sum where coins of any node=node number itself.
        boolean ans = false;
        while (q.isEmpty() == false) //perform bfs
        {
            int p = q.poll();
            for (int j = 0; j < adj[p].size(); j++) {
                int x = adj[p].get(j);
                if (x != arr[p]) {
                    arr[x] = p;
                    sum[x] = sum[p] + x + 1;
                    q.add(x);
                }
            }
                if (adj[p].size() == 0 && sum[p] == s)  //this means that the node is a leaf and we have found a path
                {
                    ans = true;
                    break;
                }
        }
        if (ans == true)  //If ans is true append true to the ans,else false
            sb.append("True" + "\n");
        else
            sb.append("False" + "\n");
        System.out.print(sb);  //Printing it
    }
}

/*
input format-
number of nodes
parent1 child1
parent2 child2
. 
.
.
parent(n-1) child(n-1)
root
desired sum

sample input:-
6
1 4
1 2
4 3
2 5
2 6
1
8
sample output:-
True
*/
